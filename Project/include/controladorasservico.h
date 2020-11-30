#ifndef CONTROLADORASSERVICO_H_INCLUDED
#define CONTROLADORASSERVICO_H_INCLUDED

#include "domains.h"
#include "entities.h"
#include "interfaces.h"
#include <list>

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Implementar as controladoras de servi�o.
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------
// Classes controladoras da camada de servi�os.

//--------------------------------------------------------------------------------------------
// Classe controladora de servi�o autentica��o.

class CntrServicoAutenticacao:public IServicoAutenticacao{
    public:
        bool authenticate(Cpf, Password);
};

//--------------------------------------------------------------------------------------------
// Classe controladora de servi�o pessoal.

class CntrServicoPessoal:public IServicoPessoal{
    public:
        bool registerUser(User);
        User getUser(Cpf);


};

//--------------------------------------------------------------------------------------------
// Classe controladora de servi�o produtos financeiros.

class CntrServicoProdutosFinanceiros:public IServicoProdutosFinanceiros{
    bool registerCount(Cpf, Count);
    Count getCount(Cpf cpf);
    list<Product> getProducts(Clazz);
    bool registerProduct(Product);
    bool deleteProduct(ProductCode);
    list<Aplication> getAplications(Cpf);
    bool registerAplication(Aplication, ProductCode, Cpf);
};


#endif // CONTROLADORASSERVICO_H_INCLUDED
