#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include <string>
#include "domains.h"
#include "interfaces.h"

using namespace std;

//--------------------------------------------------------------------------------------------
// Classe stub do servi�o autentica��o.

class StubServicoAutenticacao:public IServicoAutenticacao {
    private:
        static const string INVALIDO;
    public:
        bool autenticar(Cpf, Password);
};

//--------------------------------------------------------------------------------------------
// Classe stub do servi�o pessoal.

class StubServicoPessoal:public IServicoPessoal {
    private:
        static const string INVALIDO;
    public:
        bool cadastrarUsuario(User);
};

//--------------------------------------------------------------------------------------------
// Classe stub do servi�o produtos financeiros.

class StubServicoProdutosFinanceiros:public IServicoProdutosFinanceiros {
    private:
        static const string INVALIDO;
    public:
        bool cadastrarConta(Count);
        bool consultarConta(Count*);
        bool cadastrarProdutoInvestimento(Product);
        bool descadastrarProdutoInvestimento(ProductCode);
        bool realizarAplicacao(Aplication);
        bool recuperarAplicacao(Aplication*);
};

#endif // STUBS_H_INCLUDED
