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
        void execute();
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
        IServicoAutenticacao *cntr;
    public:
        bool authenticate(Cpf*);
        void setCntrServicoAutenticacao(IServicoAutenticacao*);
};

inline void CntrApresentacaoAutenticacao::setCntrServicoAutenticacao(IServicoAutenticacao *cntr){
    this->cntr = cntr;
}

//--------------------------------------------------------------------------------------------
// Classe controladora de apresentação pessoal.

class CntrApresentacaoPessoal:public IApresentacaoPessoal{
    private:
        IServicoPessoal *cntrServicoPessoal;
        IServicoProdutosFinanceiros *cntrServicoProdutosFinanceiros;
        void getUserData(Cpf);
    public:
        void execute(Cpf);
        void registerUser();
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
        IServicoProdutosFinanceiros *CntrServicoProdutosFinanceiros;
        void getCount(Cpf);
        void registerProduct();
        void deleteProduct();
        void getProduct();
        void registerAplication(Cpf);
        void getAplications(Cpf);
    public:
        void execute();
        void execute(Cpf);
        void setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros*);
};

inline void CntrApresentacaoProdutosFinanceiros::setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros *cntr){
    this->CntrServicoProdutosFinanceiros = cntr;
}


#endif // CONTROLADORASAPRESENTACAO_H_INCLUDED
