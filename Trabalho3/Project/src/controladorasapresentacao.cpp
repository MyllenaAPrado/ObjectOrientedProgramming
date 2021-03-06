#include "controladorasapresentacao.h"
#include <string>
#include <list>
//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos das classes controladoras da camada de apresenta��o.


//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora apresenta��o controle.

void CntrApresentacaoControle::execute(){

    // Mensagens a serem apresentadas na tela inicial.

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Acessar sistema.";
    char texto3[]="2 - Cadastrar usuario.";
    char texto4[]="3 - Acessar dados sobre produtos financeiros.";
    char texto5[]="4 - Encerrar execucao do sistema.";

    // Mensagens a serem apresentadas na tela de sele��o de servi�o.

    char texto6[]="Selecione um dos servicos : ";
    char texto7[]="1 - Selecionar servicos de pessoal.";
    char texto8[]="2 - Selecionar servicos relacionados a produtos financeiros.";
    char texto18[]="3 - Descadastrar do sistema.";
    char texto9[]="4 - Encerrar sessao.";

    char texto10[]="Falha na autenticacao. Digite algo para continuar.";                        // Mensagem a ser apresentada.

    int campo;                                                                                  // Campo de entrada.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    bool apresentar = true;                                                                     // Controle de la�o.

    while(apresentar){

        // Apresenta tela inicial.

        clear();                                                                                // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);                                                 // Imprime nome do campo.
        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 6,coluna/4,"%s",texto4);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 8,coluna/4,"%s",texto5);                                             // Imprime nome do campo.

        noecho();
        campo = getch() - 48;                                                                   // Leitura do campo de entrada e convers�o de ASCII.
        echo();

        switch(campo){
            case 1: if(cntrApresentacaoAutenticacao->authenticate(&cpf)){                         // Solicita autentica��o.
                        bool apresentar = true;                                                 // Controle de la�o.
                        while(apresentar){

                            // Apresenta tela de sele��o de servi�o.

                            clear();                                                            // Limpa janela.
                            mvprintw(linha/4,coluna/4,"%s",texto6);                             // Imprime nome do campo.
                            mvprintw(linha/4 + 2,coluna/4,"%s",texto7);                         // Imprime nome do campo.
                            mvprintw(linha/4 + 4,coluna/4,"%s",texto8);                         // Imprime nome do campo.
                            mvprintw(linha/4 + 8,coluna/4,"%s",texto9);                         // Imprime nome do campo.                                    // Apresenta tela de sele��o de servi�o.
                            mvprintw(linha/4 + 6,coluna/4,"%s",texto18);
                            noecho();
                            campo = getch() - 48;                                               // Leitura do campo de entrada e convers�o de ASCII.
                            echo();

                            switch(campo){
                                case 1: cntrApresentacaoPessoal->execute(cpf);                 // Solicita servi�o de pessoal.
                                        break;
                                case 2: cntrApresentacaoProdutosFinanceiros->execute(cpf);     // Solicita servi�o de produto financeiro.
                                        break;
                                case 3: if(cntrApresentacaoPessoal->unsubscribe(cpf))     // Solicita servi�o de produto financeiro.
                                            apresentar = false;
                                        break;
                                case 4: apresentar = false;
                                        break;
                            }
                        }
                    }
                    else {
                        clear();                                                                // Limpa janela.
                        mvprintw(linha/4,coluna/4,"%s",texto10);                                // Imprime mensagem.
                        noecho();                                                               // Desabilita eco.
                        getch();                                                                // Leitura de caracter digitado.
                        echo();                                                                 // Habilita eco.
                    }
                    break;
            case 2: cntrApresentacaoPessoal->registerUser();
                    break;
            case 3: cntrApresentacaoProdutosFinanceiros->execute();
                    break;
            case 4: apresentar = false;
                    break;
        }
    }
    return;
}

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora apresenta��o autentica��o.

bool CntrApresentacaoAutenticacao::authenticate(Cpf *cpf){

    // Mensagens a serem apresentadas na tela de autentica��o.

    char texto1[]="Digite o CPF  : ";
    char texto2[]="Digite a senha: ";
    char texto3[]="Dado em formato incorreto. Digite algo.";

    // Campos de entrada.

    char campo1[80];
    char campo2[80];

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    Password senha;                                                                                // Instancia a classe Senha.

    echo();                                                                                     // Habilita eco.

    while(true){

        // Apresenta tela de autentica��o.

        clear();                                                                                // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);                                                 // Imprime nome do campo.
        getstr(campo1);                                                                         // L� valor do campo.
        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                             // Imprime nome do campo.
        getstr(campo2);                                                                         // L� valor do campo.

        try{
            cpf->setCpf(string(campo1));                                                      // Atribui valor ao CPF.
            senha.setPassword(string(campo2));                                                     // Atribui Valor � senha.
            break;                                                                              // Abandona la�o em caso de formatos corretos.
        }
        catch(invalid_argument &exp){                                                           // Captura exce��o devido a formato incorreto.
            clear();                                                                            // Limpa janela.
            mvprintw(linha/4,coluna/4,"%s",texto3);                                             // Informa formato incorreto.
            noecho();
            getch();                                                                            // L� caracter digitado.
            echo();
        }
    }
    return (cntr->authenticate(*cpf, senha));
}

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora apresenta��o pessoal.

bool CntrApresentacaoPessoal::unsubscribe(Cpf cpf){

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.
    char texto1[]= "Sucesso. Usuario descadastrado";
    char texto2[]= "Falha no descadastramento ";
     clear();
    if(cntrServicoPessoal->deleteUser(cpf)){
        mvprintw(linha/4,coluna/4,"%s", texto1);
        noecho();
        getch();
        echo();

        return true;
    }
    mvprintw(linha/4,coluna/4,"%s", texto2);
    noecho();
    getch();
    echo();
    return false;

}

void CntrApresentacaoPessoal::execute(Cpf cpf){

    // Mensagens a serem apresentadas na tela de sele��o de servi�o..

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Consultar dados pessoais.";
    char texto3[]="2 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    bool apresentar = true;                                                                     // Controle de la�o.

    echo();                                                                                     // Habilita eco.

    while(apresentar){

        // Apresenta tela de sela��o de servi�o.

        clear();                                                                                // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);                                                 // Imprime nome do campo.
        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                             // Imprime nome do campo.
        noecho();
        campo = getch() - 48;                                                                   // Leitura do campo de entrada e convers�o de ASCII.
        echo();

        switch(campo){
            case 1: getUserData(cpf);
                    break;
            case 2: apresentar = false;
                    break;
        }
    }
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoPessoal::registerUser(){

    // Mensagens a serem apresentadas na tela de cadastramento.

    char texto1[] ="Preencha os seguintes campos: ";
    char texto2[] ="Nome            :";
    char texto3[] ="Endereco        :";
    char texto4[] ="CEP             :";
    char texto5[] ="CPF             :";
    char texto6[] ="Senha           :";
    char texto7[] ="Numero de conta :";
    char texto8[] ="Agencia         :";
    char texto9[] ="Banco           :";
    char texto10[]="Dados em formato incorreto. Digite algo.";
    char texto11[]="Sucesso no cadastramento. Digite algo.";
    char texto12[]="Falha no cadastramento. Digite algo.";

    char campo1[80], campo2[80], campo3[80], campo4[80], campo5[80];                            // Cria campos para entrada dos dados.
    char campo6[80], campo7[80], campo8[80];                                                    // Cria campos para entrada dos dados.

    // Instancia os dom�nios.

    Name name;
    Address address;
    ZipCode zipCode;
    Cpf cpf;
    Password password;
    Number number;
    AgencyCode agency;
    BankCode bank;

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    // Apresenta tela de cadastramento.

    clear();                                                                                    // Limpa janela.

    mvprintw(linha/4,coluna/4,"%s",texto1);                                                     // Imprime nome do campo.
    mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                                 // Imprime nome do campo.
    getstr(campo1);                                                                             // L� valor do campo.
    mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                                 // Imprime nome do campo.
    getstr(campo2);                                                                             // L� valor do campo.
    mvprintw(linha/4 + 6,coluna/4,"%s",texto4);                                                 // Imprime nome do campo.
    getstr(campo3);                                                                             // L� valor do campo.
    mvprintw(linha/4 + 8,coluna/4,"%s",texto5);                                                 // Imprime nome do campo.
    getstr(campo4);                                                                             // L� valor do campo.
    mvprintw(linha/4 + 10,coluna/4,"%s",texto6);                                                // Imprime nome do campo.
    getstr(campo5);                                                                             // L� valor do campo.
    mvprintw(linha/4 + 12,coluna/4,"%s",texto7);                                                // Imprime nome do campo.
    getstr(campo6);                                                                             // L� valor do campo.
    mvprintw(linha/4 + 14,coluna/4,"%s",texto8);                                                // Imprime nome do campo.
    getstr(campo7);                                                                             // L� valor do campo.
    mvprintw(linha/4 + 16,coluna/4,"%s",texto9);                                                // Imprime nome do campo.
    getstr(campo8);                                                                            // L� valor do campo.

    string zipAux(campo3);
    string bankAux(campo8);
    vector<int> agencyAux;
    string aux(campo7);
    for(int i = 0; i < aux.length(); i++)
        agencyAux.push_back((aux[i]) - '0');

    try{
        name.setName(string(campo1));
        address.setAddress(string(campo2));
        zipCode.setZipCode(stoi(zipAux));
        cpf.setCpf(string(campo4));
        password.setPassword(string(campo5));
        number.setNumber(string(campo6));
        agency.setCode(agencyAux);
        bank.setCode(stoi(bankAux));

    }
    catch(invalid_argument &exp){
        mvprintw(linha/4 + 18,coluna/4,"%s",texto10);                                           // Informa formato incorreto.
        noecho();                                                                               // Desabilita eco.
        getch();                                                                                // Leitura de caracter digitado.
        echo();                                                                                 // Habilita eco.
        return;
    }
    //
 // Instancia e inicializa entidades.

    User user;

    user.setName(name);
    user.setAddress(address);
    user.setZipCode(zipCode);
    user.setCpf(cpf);
    user.setPassword(password);

    Count countt;

    countt.setNumber(number);
    countt.setAgencyCode(agency);
    countt.setBankCode(bank);

    // Cadastra usu�rio e conta.

    //User user;
    if(cntrServicoPessoal->registerUser(user)){
        if(cntrServicoProdutosFinanceiros->registerCount(cpf, countt)){
            mvprintw(linha/4 + 18,coluna/4,"%s",texto11);                                               // Informa sucesso.
            noecho();
            getch();
            echo();
            return;
        }
    }
    mvprintw(linha/4 + 18,coluna/4,"%s",texto12);                                                       // Informa falha.
    noecho();
    getch();
    echo();

    return;
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoPessoal::getUserData(Cpf cpf){

    // Mensagens a serem apresentadas na tela de apresenta��o de dados pessoais.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.
    User user = cntrServicoPessoal->getUser(cpf);
    string zipCode = to_string(user.getZipCode().getZipCode());

    char texto1[]= "Nome: ";
    char texto2[]= "Endereco: ";
    char texto3[]= "CEP: ";
    char texto4[]= "CPF: ";
    char texto5[]= "Senha: ";

    clear();                                                                                    // Limpa janela.
    mvprintw(linha/4,coluna/4,"%s %s", texto1, user.getName().getName().c_str());                                                      // Imprime nome do campo.
    mvprintw(linha/4+2,coluna/4,"%s %s",texto2, user.getAddress().getAddress().c_str());
    mvprintw(linha/4+4,coluna/4,"%s %s", texto3, zipCode.c_str());
    mvprintw(linha/4+6,coluna/4,"%s %s",texto4, user.getCpf().getCpf().c_str());
    mvprintw(linha/4+8,coluna/4,"%s %s",texto5, user.getPassword().getPassword().c_str());
    noecho();
    getch();
    echo();
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::execute(){

    // Mensagens a serem apresentadas na tela simplificada de produtos financeiros.

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Consultar produto de investimento.";
    char texto3[]="2 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    echo();                                                                                     // Habilita eco.

    bool apresentar = true;                                                                     // Controle de la�o.

    echo();                                                                                     // Habilita eco.

    while(apresentar){

        // Apresenta tela simplificada de produtos financeiros.

        clear();                                                                                // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);                                                 // Imprime nome do campo.
        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                             // Imprime nome do campo.
        noecho();
        campo = getch() - 48;                                                                   // Leitura do campo de entrada e convers�o de ASCII.
        echo();

        switch(campo){
            case 1: getProduct();
                    break;
            case 2: apresentar = false;
                    break;
        }
    }
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::execute(Cpf cpf){

    // Mensagens a serem apresentadas tela completa de produtos financeiros.

    char texto1[] ="Selecione um dos servicos : ";
    char texto2[] ="1 - Consultar conta corrente.";
    char texto3[] ="2 - Cadastrar produto de investimento.";
    char texto4[] ="3 - Descadastrar produto de investimento.";
    char texto5[] ="4 - Consultar produto de investimento.";
    char texto6[] ="5 - Realizar aplicacao em produto de investimento.";
    char texto7[] ="6 - Listar aplicacoes em produto de investimento.";
    char texto8[] ="7 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    echo();                                                                                     // Habilita eco.

    bool apresentar = true;                                                                     // Controle de la�o.

    echo();                                                                                     // Habilita eco.

    while(apresentar){

        // Apresenta tela completa de produtos financeiros.

        clear();                                                                                // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);                                                 // Imprime nome do campo.
        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 6,coluna/4,"%s",texto4);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 8,coluna/4,"%s",texto5);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 10,coluna/4,"%s",texto6);                                            // Imprime nome do campo.
        mvprintw(linha/4 + 12,coluna/4,"%s",texto7);                                            // Imprime nome do campo.
        mvprintw(linha/4 + 14,coluna/4,"%s",texto8);                                            // Imprime nome do campo.
        noecho();
        campo = getch() - 48;                                                                   // Leitura do campo de entrada e convers�o de ASCII.
        echo();

        switch(campo){
            case 1: getCount(cpf);
                    break;
            case 2: registerProduct();
                    break;
            case 3: deleteProduct();
                    break;
            case 4: getProduct();
                    break;
            case 5: registerAplication(cpf);
                    break;
            case 6: getAplications(cpf);
                    break;
            case 7: apresentar = false;
                    break;
        }
    }
}

//--------------------------------------------------------------------------------------------
//COM PROBLEMA AINDA
void CntrApresentacaoProdutosFinanceiros::getCount(Cpf cpf){
    // Mensagens a serem apresentadas.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.
    Count countt = CntrServicoProdutosFinanceiros->getCount(cpf);
    char texto[]="Servico consultar conta nao implementado. Digite algo.";                      // Mensagem a ser apresentada.

    char texto1[]= "Banco: ";
    char texto2[]= "Agencia: ";
    char texto3[]= "Numero: ";
    string aux;
    for(int n : countt.getAgencyCode().getCode())
            aux += to_string(n);
    clear();                                                                                    // Limpa janela.
    mvprintw(linha/4,coluna/4,"%s %s", texto1, to_string(countt.getBankCode().getCode()).c_str());                                                      // Imprime nome do campo.
    mvprintw(linha/4+2,coluna/4,"%s %s",texto2, aux.c_str());
    mvprintw(linha/4+4,coluna/4,"%s %s", texto3, countt.getNumber().getNumber().c_str());

    noecho();
    getch();
    echo();
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::registerProduct(){

// Mensagens a serem apresentadas na tela de cadastramento.

    char texto1[] ="Preencha os seguintes campos: ";
    char texto2[] ="Codigo do produto            :";
    char texto3[] ="Classe        :";
    char texto4[] ="Emissor             :";
    char texto5[] ="Prazo            :";
    char texto6[] ="Data de vencimento          :";
    char texto7[] ="Taxa :";
    char texto8[] ="Horario        :";
    char texto9[] ="Valor minimo           :";
    char texto10[]="Dados em formato incorreto. Digite algo.";
    char texto11[]="Sucesso no cadastramento. Digite algo.";
    char texto12[]="Falha no cadastramento. Digite algo.";

    char campo1[80], campo2[80], campo3[80], campo4[80], campo5[80];                            // Cria campos para entrada dos dados.
    char campo6[80], campo7[80], campo8[80];                                                    // Cria campos para entrada dos dados.


    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    // Apresenta tela de cadastramento.

    clear();                                                                                    // Limpa janela.

    mvprintw(linha/4,coluna/4,"%s",texto1);                                                     // Imprime nome do campo.
    mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                                 // Imprime nome do campo.
    getstr(campo1);                                                                             // L� valor do campo.
    mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                                 // Imprime nome do campo.
    getstr(campo2);                                                                             // L� valor do campo.
    mvprintw(linha/4 + 6,coluna/4,"%s",texto4);                                                 // Imprime nome do campo.
    getstr(campo3);                                                                             // L� valor do campo.
    mvprintw(linha/4 + 8,coluna/4,"%s",texto5);                                                 // Imprime nome do campo.
    getstr(campo4);                                                                             // L� valor do campo.
    mvprintw(linha/4 + 10,coluna/4,"%s",texto6);                                                // Imprime nome do campo.
    getstr(campo5);                                                                             // L� valor do campo.
    mvprintw(linha/4 + 12,coluna/4,"%s",texto7);                                                // Imprime nome do campo.
    getstr(campo6);                                                                             // L� valor do campo.
    mvprintw(linha/4 + 14,coluna/4,"%s",texto8);                                                // Imprime nome do campo.
    getstr(campo7);                                                                             // L� valor do campo.
    mvprintw(linha/4 + 16,coluna/4,"%s",texto9);                                                // Imprime nome do campo.
    getstr(campo8);                                                                            // L� valor do campo.

     // Instancia os dom�nios.

    ProductCode code;
    Clazz clazz;
    Emitter emitter;
    Term term;
    Datee dueDate;
    Fee fee;
    Time time;
    MinimumValue value;

    vector<int> codeAux;
    string aux(campo1);
    for(int i = 0; i < aux.length(); i++)
        codeAux.push_back((aux[i]) - '0');

    try{
        code.setCode(codeAux);
        clazz.setClazz(string(campo2));
        emitter.setEmitter(string(campo3));
        term.setTerm(stoi(string(campo4)));
        dueDate.setDatee(string(campo5));
        fee.setFee(stoi(string(campo6)));
        time.setTime(string(campo7));
        value.setMinimumValue(stod(string(campo8)));
    }
    catch(invalid_argument &exp){
        mvprintw(linha/4 + 18,coluna/4,"%s",texto10);                                           // Informa formato incorreto.
        noecho();                                                                               // Desabilita eco.
        getch();                                                                                // Leitura de caracter digitado.
        echo();                                                                                 // Habilita eco.
        return;
    }
    //
 // Instancia e inicializa entidades.

    Product product;
    product.setProductCode(code);
    product.setClazz(clazz);
    product.setEmitter(emitter);
    product.setTerm(term);
    product.setDueDate(dueDate);
    product.setFee(fee);
    product.setTime(time);
    product.setMinimumValue(value);

    if(CntrServicoProdutosFinanceiros->registerProduct(product)){
            mvprintw(linha/4 + 18,coluna/4,"%s",texto11);                                               // Informa sucesso.
            noecho();
            getch();
            echo();
            return;

    }
    mvprintw(linha/4 + 18,coluna/4,"%s",texto12);                                                       // Informa falha.
    noecho();
    getch();
    echo();

    return;
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::deleteProduct(){

    // Mensagens a serem apresentadas.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.
    char campo1[80];
    char texto11[]="Produto descadastrado. Digite algo.";
    char texto12[]="Falha no descadastramento. Digite algo.";
    char texto[]="Codigo do produto:";    // Mensagem a ser apresentada.
    clear();                                                                                    // Limpa janela.
    mvprintw(linha/4,coluna/4,"%s",texto);                                                      // Imprime nome do campo.
    getstr(campo1);
    vector<int> codeAux;
    string aux(campo1);
    for(int i = 0; i < aux.length(); i++)
        codeAux.push_back((aux[i]) - '0');
    ProductCode productCode;
    productCode.setCode(codeAux);

    if(CntrServicoProdutosFinanceiros->deleteProduct(productCode)){
            mvprintw(linha/4 + 4,coluna/4,"%s",texto11);                                               // Informa sucesso.
            noecho();
            getch();
            echo();
            return;

    }
    mvprintw(linha/4 + 4,coluna/4,"%s",texto12);                                                       // Informa falha.
    noecho();
    getch();
    echo();

    return;

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::getProduct(){
    // Mensagens a serem apresentadas.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.
    char campo1[80];
    char texto[]="Classe do produto:";       // Mensagem a ser apresentada.
    clear();                                                                                    // Limpa janela.
    mvprintw(linha/4,coluna/4,"%s",texto);                                                      // Imprime nome do campo.
    getstr(campo1);

    //char texto1[]="CLASSE | EMISSOR | PRAZO | DATA| HORARIO| VALOR | TAXA  ";
    Clazz clazz;
    clazz.setClazz(string(campo1));
    list<Product> products = CntrServicoProdutosFinanceiros->getProducts(clazz);
    int i = 6;
    //mvprintw(linha/4+4,coluna/4,"%s",texto1);
    while(!products.empty()){
        Product product = products.back();
        products.pop_back();
        //mvprintw(linha/4 + i,coluna/4,"%s %s %s %s %s %s %s", product.getClazz().getClazz().c_str(), product.getEmitter().getEmitter().c_str(),
          //       to_string(product.getTerm().getTerm()).c_str(), product.getDueDate().getDatee().c_str(), product.getTime().getTime().c_str(),
            //     to_string(product.getMinimumValue().getMinimumValue()).c_str(), to_string(product.getFee().getFee()).c_str());
        mvprintw(linha/4 + i,coluna/4,"%s %s", "CLASSE: ", product.getClazz().getClazz().c_str());
        mvprintw(linha/4 + i + 2,coluna/4,"%s %s","EMISSOR: ", product.getEmitter().getEmitter().c_str());
        mvprintw(linha/4 + i + 4,coluna/4,"%s %s","PRAZO: ",  to_string(product.getTerm().getTerm()).c_str());
        mvprintw(linha/4 + i + 6,coluna/4,"%s %s","DATA: ",  product.getDueDate().getDatee().c_str());
        mvprintw(linha/4 + i + 8,coluna/4,"%s %s","HORARIO: ",  product.getTime().getTime().c_str());
        mvprintw(linha/4 + i + 10,coluna/4,"%s %s","VALOR: ",  to_string(product.getMinimumValue().getMinimumValue()).c_str());
        mvprintw(linha/4 + i + 12,coluna/4,"%s %s","TAXA: ",  to_string(product.getFee().getFee()).c_str());
        i+=14;
    }
    noecho();
    getch();
    echo();
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::registerAplication(Cpf cpf){

    // Mensagens a serem apresentadas.
/**
    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    char texto[]="Servico realizar aplicacao nao implementado. Digite algo.";                   // Mensagem a ser apresentada.
    clear();                                                                                    // Limpa janela.
    mvprintw(linha/4,coluna/4,"%s",texto);                                                      // Imprime nome do campo.
    noecho();
    getch();
    echo();
**/
    // Mensagens a serem apresentadas na tela de cadastramento.

    char texto1[] ="Preencha os seguintes campos: ";
    char texto2[] ="Codigo da aplicacao:";
    char texto3[] ="Codigo do produto:";
    char texto4[] ="Valor:";
    char texto5[] ="Data:";
    char texto10[]="Dados em formato incorreto. Digite algo.";
    char texto11[]="Sucesso no cadastramento. Digite algo.";
    char texto12[]="Falha no cadastramento. Digite algo.";

    char campo1[80], campo2[80], campo3[80], campo4[80];                                                  // Cria campos para entrada dos dados.


    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    // Apresenta tela de cadastramento.

    clear();                                                                                    // Limpa janela.

    mvprintw(linha/4,coluna/4,"%s",texto1);                                                     // Imprime nome do campo.
    mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                                 // Imprime nome do campo.
    getstr(campo1);                                                                             // L� valor do campo.
    mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                                 // Imprime nome do campo.
    getstr(campo2);                                                                             // L� valor do campo.
    mvprintw(linha/4 + 6,coluna/4,"%s",texto4);                                                 // Imprime nome do campo.
    getstr(campo3);                                                                             // L� valor do campo.
    mvprintw(linha/4 + 8,coluna/4,"%s",texto5);                                                 // Imprime nome do campo.
    getstr(campo4);                                                                             // L� valor do campo.                                                                      // L� valor do campo.

     // Instancia os dom�nios.

    AplicationCode aplicationCode;
    ProductCode productCode;
    AplicationValue value;
    Datee datee;

    vector<int> aplicationCodeAux;
    string aux(campo1);
    for(int i = 0; i < aux.length(); i++)
        aplicationCodeAux.push_back((aux[i]) - '0');

    vector<int> productCodeAux;
    string aux2(campo2);
    for(int i = 0; i < aux2.length(); i++)
        productCodeAux.push_back((aux2[i]) - '0');

    try{
        aplicationCode.setCode(aplicationCodeAux);
        productCode.setCode(productCodeAux);
        value.setAplicationValue(stod(string(campo3)));
        datee.setDatee(string(campo4));
    }
    catch(invalid_argument &exp){
        mvprintw(linha/4 + 12,coluna/4,"%s",texto10);                                           // Informa formato incorreto.
        noecho();                                                                               // Desabilita eco.
        getch();                                                                                // Leitura de caracter digitado.
        echo();                                                                                 // Habilita eco.
        return;
    }
    //
 // Instancia e inicializa entidades.

    Aplication aplication;
    aplication.setCode(aplicationCode);
    aplication.setValue(value);
    aplication.setDatee(datee);

    if(CntrServicoProdutosFinanceiros->registerAplication(aplication, productCode, cpf)){
            mvprintw(linha/4 + 12,coluna/4,"%s",texto11);                                               // Informa sucesso.
            noecho();
            getch();
            echo();
            return;

    }
    mvprintw(linha/4 + 12,coluna/4,"%s",texto12);                                                       // Informa falha.
    noecho();
    getch();
    echo();

    return;

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::getAplications(Cpf cpf){

    // Mensagens a serem apresentadas.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.
    clear();
    list<Aplication> aplications = CntrServicoProdutosFinanceiros->getAplications(cpf);
    int i = 0;
    while(!aplications.empty()){
        Aplication aplication = aplications.back();
        aplications.pop_back();
        string aux;
        for(int n : aplication.getCode().getCode())
            aux += to_string(n);
        mvprintw(linha/4 + i,coluna/4,"%s %s", "CODIGO: ", aux.c_str());
        mvprintw(linha/4 + i + 2,coluna/4,"%s %s","VALOR: ", to_string(aplication.getValue().getAplicationValue()).c_str());
        mvprintw(linha/4 + i + 4,coluna/4,"%s %s","DATA: ",  aplication.getDatee().getDatee().c_str());
        i+=8;
    }
    noecho();
    getch();
    echo();
}


