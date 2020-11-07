#ifndef CONTROLADORASAPRESENTACAO_H_INCLUDED
#define CONTROLADORASAPRESENTACAO_H_INCLUDED

#include <string.h>
#include "curses.h"
#include "domains.h"
#include "entities.h"
#include "interfaces.h"

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Adequar as controladoras de apresentação de acordo com as necessidades.
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------
// Classes controladoras da camada de apresentação.

//--------------------------------------------------------------------------------------------
// Classe controladora de apresentação controle.

class CntrApresentacaoControle{
    private:
        Cpf cpf;
        IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
        IApresentacaoPessoal *cntrApresentacaoPessoal;
        IApresentacaoProdutosFinanceiros *cntrApresentacaoProdutosFinanceiros;
    public:
        void executar();
        void setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao*);
        void setCntrApresentacaoPessoal(IApresentacaoPessoal*);
        void setCntrApresentacaoProdutosFinanceiros(IApresentacaoProdutosFinanceiros*);
};

inline void CntrApresentacaoControle::setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao *cntr){
    cntrApresentacaoAutenticacao = cntr;
}

inline void CntrApresentacaoControle::setCntrApresentacaoPessoal(IApresentacaoPessoal *cntr){
            cntrApresentacaoPessoal = cntr;
}

inline void CntrApresentacaoControle::setCntrApresentacaoProdutosFinanceiros(IApresentacaoProdutosFinanceiros *cntr){
    cntrApresentacaoProdutosFinanceiros = cntr;
}

//--------------------------------------------------------------------------------------------
// Classe controladora de apresentação autenticação.

class CntrApresentacaoAutenticacao:public IApresentacaoAutenticacao{
    private:
        int linha,coluna;                                                                   // Dados sobre tamanho da tela.
        IServicoAutenticacao *cntr;
    public:
        bool autenticar(Cpf*);
        void setCntrServicoAutenticacao(IServicoAutenticacao*);
};

inline void CntrApresentacaoAutenticacao::setCntrServicoAutenticacao(IServicoAutenticacao *cntr){
    this->cntr = cntr;
}

//--------------------------------------------------------------------------------------------
// Classe controladora de apresentação pessoal.

class CntrApresentacaoPessoal:public IApresentacaoPessoal{
    private:
        int linha,coluna;                                                                   // Dados sobre tamanho da tela.
        IServicoPessoal *cntrServicoPessoal;
        IServicoProdutosFinanceiros *cntrServicoProdutosFinanceiros;
        void consultarDadosPessoais();
    public:
        void executar(Cpf);
        void cadastrar();
        void setCntrServicoPessoal(IServicoPessoal*);
        void setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros*);
};

inline void CntrApresentacaoPessoal::setCntrServicoPessoal(IServicoPessoal *cntr){
    cntrServicoPessoal = cntr;
}

inline void CntrApresentacaoPessoal::setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros *cntr){
    cntrServicoProdutosFinanceiros = cntr;
}

//--------------------------------------------------------------------------------------------
// Classe controladora de apresentação produtos financeiros.

class CntrApresentacaoProdutosFinanceiros:public IApresentacaoProdutosFinanceiros{
    private:
        IServicoProdutosFinanceiros *cntr;
        void consultarConta();
        void cadastrarProdutoInvestimento();
        void descadastrarProdutoInvestimento();
        void consultarProdutoInvestimento();
        void realizarAplicacao();
        void listarAplicacoes();
    public:
        void executar();
        void executar(Cpf);
        void setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros*);
};

inline void CntrApresentacaoProdutosFinanceiros::setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros *cntr){
    this->cntr = cntr;
}


#endif // CONTROLADORASAPRESENTACAO_H_INCLUDED
