#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "domains.h"
#include "entities.h"

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Adequar as declarações das interfaces de acordo com as necessidades.
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

// Forward declarations.

class IServicoAutenticacao;
class IServicoPessoal;
class IServicoProdutosFinanceiros;

//--------------------------------------------------------------------------------------------
// Declarações das interfaces da camada de apresentação.

class IApresentacaoAutenticacao {
    public:
        virtual bool autenticar(Cpf*) = 0;
        virtual void setCntrServicoAutenticacao(IServicoAutenticacao*) = 0;
        virtual ~IApresentacaoAutenticacao(){}
};

class IApresentacaoPessoal{
    public:
        virtual void executar(Cpf) = 0;
        virtual void cadastrar() = 0;
        virtual void setCntrServicoPessoal(IServicoPessoal*) = 0;
        virtual void setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros*) = 0;
        virtual ~IApresentacaoPessoal(){}
};

class IApresentacaoProdutosFinanceiros{
    public:
        virtual void executar() = 0;
        virtual void executar(Cpf) = 0;
        virtual void setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros*) = 0;
        ~IApresentacaoProdutosFinanceiros(){}
};

//--------------------------------------------------------------------------------------------
// Declarações das interfaces da camada de serviço.

class IServicoAutenticacao {
    public:
        virtual bool autenticar(Cpf, Password) = 0;
        virtual ~IServicoAutenticacao(){}
};

class IServicoPessoal{
public:
        virtual bool cadastrarUsuario(User) = 0;
        virtual ~IServicoPessoal(){}
};

class IServicoProdutosFinanceiros{
public:
        virtual bool cadastrarConta(Count) = 0;
        virtual bool consultarConta(Count*) = 0;
        virtual bool cadastrarProdutoInvestimento(Product) = 0;
        virtual bool descadastrarProdutoInvestimento(ProductCode) = 0;
        virtual bool realizarAplicacao(Aplication) = 0;
        virtual bool recuperarAplicacao(Aplication*) = 0;                        // Adaptar aos requisitos.
};

#endif // INTERFACES_H_INCLUDED
