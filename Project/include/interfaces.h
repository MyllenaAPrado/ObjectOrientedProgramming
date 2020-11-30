#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "domains.h"
#include "entities.h"
#include <list>

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
        virtual bool authenticate(Cpf*) = 0;
        virtual void setCntrServicoAutenticacao(IServicoAutenticacao*) = 0;
        virtual ~IApresentacaoAutenticacao(){}
};

class IApresentacaoPessoal{
    private:
        virtual void getUserData(Cpf) = 0;

    public:
        virtual void execute(Cpf) = 0;
        virtual void registerUser() = 0;
        virtual void setCntrServicoPessoal(IServicoPessoal*) = 0;
        virtual void setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros*) = 0;
        virtual ~IApresentacaoPessoal(){}
};

class IApresentacaoProdutosFinanceiros{
    private:
        virtual void getCount(Cpf) = 0;
        virtual void registerProduct() = 0;
        virtual void deleteProduct() = 0;
        virtual void getProduct() = 0;
        virtual void registerAplication(Cpf) = 0;
        virtual void getAplications(Cpf) = 0;
    public:
        virtual void execute() = 0;
        virtual void execute(Cpf) = 0;
        virtual void setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros*) = 0;
        ~IApresentacaoProdutosFinanceiros(){}
};

//--------------------------------------------------------------------------------------------
// Declarações das interfaces da camada de serviço.

class IServicoAutenticacao {
    public:
        virtual bool authenticate(Cpf, Password) = 0;
        virtual ~IServicoAutenticacao(){}
};

class IServicoPessoal{
public:
        virtual bool registerUser(User) = 0;
        virtual User getUser(Cpf) = 0;
        virtual ~IServicoPessoal(){}
};

class IServicoProdutosFinanceiros{
public:
        virtual bool registerCount(Cpf, Count) = 0;
        virtual Count getCount(Cpf cpf) = 0;
        virtual list<Product> getProducts(Clazz) = 0;
        virtual bool registerProduct(Product) = 0;
        virtual bool deleteProduct(ProductCode) = 0;
        virtual list<Aplication> getAplications(Cpf) = 0;
        virtual bool registerAplication(Aplication, ProductCode, Cpf) = 0;

};

#endif // INTERFACES_H_INCLUDED
