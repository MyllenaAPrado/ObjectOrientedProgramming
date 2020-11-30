#include "database.h"
#include "entities.h"
#include "domains.h"
#include "sqlite3.h"
#include <string>
#include <sstream>

//Atributo estático container List.

list<ElementoResultado> ComandoSQL::listaResultado;

//---------------------------------------------------------------------------
//Classe ErroPersistencia.

EErroPersistencia::EErroPersistencia(string mensagem){
        this->mensagem = mensagem;
}

string EErroPersistencia::what() {
        return mensagem;
}

//---------------------------------------------------------------------------
//Classe ElementoResultado.

void ElementoResultado::setNomeColuna(const string& nomeColuna) {
        this->nomeColuna = nomeColuna;
}

void ElementoResultado::setValorColuna(const string& valorColuna){
        this->valorColuna = valorColuna;
}


//---------------------------------------------------------------------------
//Classe ComandoSQL.

void ComandoSQL::conectar() {
      rc = sqlite3_open(nomeBancoDados, &bd);
      if( rc != SQLITE_OK )
        throw EErroPersistencia("Erro na conexao ao banco de dados");
}

void ComandoSQL::desconectar() {
      rc =  sqlite3_close(bd);
      if( rc != SQLITE_OK )
        throw EErroPersistencia("Erro na desconexao ao banco de dados");
}

void ComandoSQL::executar() {
        conectar();
        rc = sqlite3_exec(bd, comandoSQL.c_str(), callback, 0, &mensagem);
        if(rc != SQLITE_OK){
                sqlite3_free(mensagem);
                desconectar();
                throw EErroPersistencia("Erro na execucao do comando SQL");
        }
        desconectar();
}

int ComandoSQL::callback(void *NotUsed, int argc, char **valorColuna, char **nomeColuna){
      NotUsed=0;
      ElementoResultado elemento;
      int i;
      for(i=0; i<argc; i++){
        elemento.setNomeColuna(nomeColuna[i]);
        elemento.setValorColuna(valorColuna[i] ? valorColuna[i]: "NULL");
        listaResultado.push_front(elemento);
      }
      return 0;
}


//---------------------------------------------------------------------------
//Classes Usuarios.
ComandGetUser::ComandGetUser(Cpf cpf){
        comandoSQL = "select * from user where cpf = '";
        comandoSQL += cpf.getCpf();
        comandoSQL += "'";
}

User ComandGetUser::getResult() {
        ElementoResultado resultado;
        User user;
        Name name;
        Address address;
        ZipCode zipCode;
        Cpf cpf;
        Password password;

        //Remover id;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        int id = int(stoi(resultado.getValorColuna()));

        //Remover name;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        name.setName(resultado.getValorColuna());
        user.setName(name);

        //Remover address;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        address.setAddress(resultado.getValorColuna());
        user.setAddress(address);

        //Remover zipCode;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        zipCode.setZipCode(int(stoi(resultado.getValorColuna())));
        user.setZipCode(zipCode);

        //Remover cpf;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        cpf.setCpf(resultado.getValorColuna());
        user.setCpf(cpf);

        //Remover password;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        password.setPassword(resultado.getValorColuna());
        user.setPassword(password);

        return user;
}

ComandInsertUser::ComandInsertUser(User user){

    //comandoSQL = "INSERT INTO user VALUES (NULL ,'podiafu', 'Rua15', '12345678', '715.224.187-18', '098765')";

    comandoSQL = "INSERT INTO user VALUES (NULL , ";
    comandoSQL += "'" + user.getName().getName() + "', ";
    comandoSQL += "'" + user.getAddress().getAddress() + "', ";
    comandoSQL += "'" + to_string(user.getZipCode().getZipCode()) + "', ";
    comandoSQL += "'" + user.getCpf().getCpf() + "', ";
    comandoSQL += "'" + user.getPassword().getPassword() + "')";

}

ComandDeleteUser::ComandDeleteUser(Cpf cpf){
    comandoSQL = "DELETE FROM user WHERE cpf = '";
    comandoSQL += cpf.getCpf();
    comandoSQL += "'";

}


//--------------------------------------------------------------------------
//Classes Contas.
ComandGetCount::ComandGetCount(Cpf cpf){
        comandoSQL = "select c.id, c.bank, c.agency, c.number, c.id_user from count c inner join user u on u.id = c.id_user where u.cpf = '";
        comandoSQL += cpf.getCpf();
        comandoSQL += "'";
}

Count ComandGetCount::getResult() {
        ElementoResultado resultado;
        int id;
        Count countt;
        BankCode bank;
        AgencyCode agency;
        Number number;

        //Remover id;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        id = int(stoi(resultado.getValorColuna()));

        //Remover bank;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        bank.setCode(int(stoi(resultado.getValorColuna())));
        countt.setBankCode(bank);

        //Remover agency;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        vector<int> agencyCode;
        string aux = resultado.getValorColuna();
        for(int i = 0; i < aux.length(); i++)
            agencyCode.push_back((aux[i]) - '0');
        agency.setCode(agencyCode);
        countt.setAgencyCode(agency);


        //Remover number;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        number.setNumber(resultado.getValorColuna());
        countt.setNumber(number);

        return countt;
}

ComandInsertCount::ComandInsertCount(Cpf cpf, Count countt){
    string aux;
    ComandGetUser comandGetUser(cpf);
    try{
        comandGetUser.executar();
        ElementoResultado resultado;
         //Remover id;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        int id = int(stoi(string(resultado.getValorColuna())));

        for(int n : countt.getAgencyCode().getCode())
            aux += to_string(n);

        comandoSQL = "INSERT INTO count VALUES (NULL, ";
        comandoSQL += "'" + to_string(countt.getBankCode().getCode()) + "', ";
        comandoSQL += "'" + aux + "', ";
        comandoSQL += "'" + countt.getNumber().getNumber() + "', ";
        comandoSQL += "'" + to_string(id) + "' )";

    }catch(EErroPersistencia &exp) {
        cout << endl << exp.what();
        cout << endl << endl << "Digite algo para continuar.";
        getch();
    }

}


//--------------------------------------------------------------------------
//Classes Produtos.

ComandGetProduct::ComandGetProduct(Clazz clazz){
    comandoSQL ="select * from product where clazz = '";
    comandoSQL += clazz.getClazz();
    comandoSQL +="'";
}

ComandGetProduct::ComandGetProduct(ProductCode code){
    string aux;
    for(int n : code.getCode())
        aux += to_string(n);

    comandoSQL ="select * from product where product_code = '";
    comandoSQL += aux;
    comandoSQL += "'";

}

list<Product> ComandGetProduct::getResult(){
    list<Product> products;
    ElementoResultado resultado;
    int id;
    ProductCode code;
    Emitter emitter;
    Term term;
    Datee dueDate;
    Time time;
    MinimumValue value;
    Clazz clazz;
    Fee fee;

    if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");

    while(!listaResultado.empty()){
        Product product;
        //Remover id;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        id = int(stoi(resultado.getValorColuna()));

        //Remover ProductCode;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        vector<int> productCode;
        string aux = resultado.getValorColuna();
        for(int i = 0; i < aux.length(); i++)
            productCode.push_back((aux[i]) - '0');
        code.setCode(productCode);
        product.setProductCode(code);

        //Remover Emitter;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        emitter.setEmitter(resultado.getValorColuna());
        product.setEmitter(emitter);

        //Remover Term;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        term.setTerm(int(stoi(resultado.getValorColuna())));
        product.setTerm(term);

        //Remover dueDate;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        dueDate.setDatee(resultado.getValorColuna());
        product.setDueDate(dueDate);

        //Remover time;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        time.setTime(resultado.getValorColuna());
        product.setTime(time);

         //Remover value;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        value.setMinimumValue(double(stod(resultado.getValorColuna())));
        product.setMinimumValue(value);

        //Remover clazz;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        clazz.setClazz(resultado.getValorColuna());
        product.setClazz(clazz);

        //Remover Fee;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        fee.setFee(int(stoi(resultado.getValorColuna())));
        product.setFee(fee);

        products.push_back(product);
    }

    return products;


}

ComandInsertProduct::ComandInsertProduct(Product product){
    string aux;
    for(int n : product.getProductCode().getCode())
            aux += to_string(n);

    comandoSQL = "INSERT INTO product VALUES (NULL, ";
    comandoSQL += "'" + aux + "', ";
    comandoSQL += "'" + product.getEmitter().getEmitter() + "', ";
    comandoSQL += "'" + to_string(product.getTerm().getTerm()) + "', ";
    comandoSQL += "'" + product.getDueDate().getDatee() + "', ";
    comandoSQL += "'" + product.getTime().getTime() + "', ";
    comandoSQL += "'" + to_string(product.getMinimumValue().getMinimumValue()) + "', ";
    comandoSQL += "'" + product.getClazz().getClazz() + "', ";
    comandoSQL += "'" + to_string(product.getFee().getFee()) + "')";
}

ComandDeleteProduct::ComandDeleteProduct(ProductCode productCode){
    string aux;
    for(int n : productCode.getCode())
            aux += to_string(n);
    comandoSQL = "DELETE FROM product WHERE product_code = '";
    comandoSQL += aux;
    comandoSQL += "'";
}

//--------------------------------------------------------------------------
//Classes Aplicacoes.
ComandGetApplication::ComandGetApplication(Cpf cpf){
    ComandGetCount comandGetCount(cpf);
    try{
        comandGetCount.executar();
        ElementoResultado resultado;
         //Remover id;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        int id = int(stoi(string(resultado.getValorColuna())));
        listaResultado.clear();

        //comandoSQL = "select a.id, a.code, a.value, a.application_date from application a inner join count c on a.id_count = c.id where c.id = '";
        comandoSQL = "select * from application where id_count = '";
        //comandoSQL = "select * from application";
        //comandoSQL += to_string(id);
        comandoSQL += resultado.getValorColuna();
        comandoSQL += "'";

    }catch(EErroPersistencia &exp) {
        cout << endl << exp.what();
        cout << endl << endl << "Digite algo para continuar.";
        getch();
    }


}

list<Aplication> ComandGetApplication::getResult(){
    list<Aplication> aplications;
    ElementoResultado resultado;
    int id;
    AplicationCode code;
    AplicationValue value;
    Datee datee;

    //if (listaResultado.empty())
      //  throw EErroPersistencia("Lista de resultados vazia.");

    while(!listaResultado.empty()){
        Aplication aplication;
        //Remover id;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        id = int(stoi(resultado.getValorColuna()));

        //Remover AplicationCode;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        vector<int> codeAux;
        string aux = resultado.getValorColuna();
        for(int i = 0; i < aux.length(); i++)
            codeAux.push_back((aux[i]) - '0');
        code.setCode(codeAux);
        aplication.setCode(code);

        //Remover AplicationValue;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        value.setAplicationValue(stod(resultado.getValorColuna()));
        aplication.setValue(value);

        //Remover Date;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        datee.setDatee(resultado.getValorColuna());
        aplication.setDatee(datee);
        listaResultado.pop_back();
        listaResultado.pop_back();
        aplications.push_back(aplication);
    }

    return aplications;

}

ComandInsertApplication::ComandInsertApplication(Aplication aplication, ProductCode productCode, Cpf cpf){
    ComandGetProduct comandGetProduct(productCode);
    ComandGetCount comandGetCount(cpf);
    try{
        comandGetProduct.executar();
        ElementoResultado resultado;

        //Remover id;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        int id_product = int(stoi(string(resultado.getValorColuna())));

        comandGetCount.executar();
        //Remover id;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        int id_count = int(stoi(string(resultado.getValorColuna())));

        string code;
        for(int n : aplication.getCode().getCode())
                code += to_string(n);

        comandoSQL = "INSERT INTO application VALUES (NULL, ";
        comandoSQL += "'" + code + "', ";
        comandoSQL += "'" + to_string(aplication.getValue().getAplicationValue()) + "', ";
        comandoSQL += "'" + aplication.getDatee().getDatee()+ "', ";
        comandoSQL += "'" + to_string(id_product) + "', ";
        comandoSQL += "'" + to_string(id_count) + "')";

    }catch(EErroPersistencia &exp) {
        cout << endl << exp.what();
        cout << endl << endl << "Digite algo para continuar.";
        getch();
    }
}



