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
        virtual bool authenticate(Cpf, Password) = 0;
        virtual void setCntrServicoAutenticacao(IServicoAutenticacao*) = 0;
        virtual ~IApresentacaoAutenticacao(){}
};

class IApresentacaoPessoal{
    public:
        virtual bool registerUser(User, Count) = 0;
        virtual User listUserData() = 0;
        virtual Count listCount() = 0;
        virtual bool unsubscribe() = 0;
        virtual void setCntrServicoPessoal(IServicoPessoal*) = 0;
        virtual void setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros*) = 0;
        virtual ~IApresentacaoPessoal(){}
};

class IApresentacaoProdutosFinanceiros{
    public:
        virtual bool registerProduct(Product) = 0;
        virtual bool deleteProduct(ProductCode) = 0;
        virtual bool apply(Aplication) = 0;
        virtual list<Aplication> listAplication() = 0;
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
        virtual bool registerUser(User, Count) = 0;
        virtual User getUserData(Cpf) = 0;
        virtual Count getCount(Number) = 0;
        virtual bool deleteUser(Cpf) = 0;
        virtual ~IServicoPessoal(){}
};

class IServicoProdutosFinanceiros{
public:
        virtual bool registerProduct(Product) = 0;
        virtual bool deleteProduct(ProductCode) = 0;
        virtual bool registerAplication(Aplication) = 0;
        virtual list<Aplication> getAplication() = 0;
};

#endif // INTERFACES_H_INCLUDED
