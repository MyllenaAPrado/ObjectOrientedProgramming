#ifndef CONTROLADORASSERVICO_H_INCLUDED
#define CONTROLADORASSERVICO_H_INCLUDED

#include "domains.h"
#include "entities.h"
#include "interfaces.h"

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Implementar as controladoras de serviço.
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------
// Classes controladoras da camada de serviços.

//--------------------------------------------------------------------------------------------
// Classe controladora de serviço autenticação.

class CntrServicoAutenticacao:public IServicoAutenticacao{
    public:
        virtual bool autenticar(Cpf, Password);
};

//--------------------------------------------------------------------------------------------
// Classe controladora de serviço pessoal.

class CntrServicoPessoal:public IServicoPessoal{
};

//--------------------------------------------------------------------------------------------
// Classe controladora de serviço produtos financeiros.

class CntrServicoProdutosFinanceiros:public IServicoProdutosFinanceiros{
};


#endif // CONTROLADORASSERVICO_H_INCLUDED
