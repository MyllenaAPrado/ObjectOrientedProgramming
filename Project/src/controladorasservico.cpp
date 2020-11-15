#include "controladorasservico.h"
#include "database.h"

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Implementar m�todos das controladoras de servi�o.
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos das classes controladoras da camada de servi�o.


//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora servi�o autentica��o.
bool CntrServicoAutenticacao::authenticate(Cpf cpf, Password password){
    ComandGetUser comandGetUser(cpf);

    try {
        comandGetUser.executar();

        User user = comandGetUser.getResult();
        //Comparar senha informada com a recuperada.
        if(user.getPassword().getPassword() == password.getPassword())
            return true;
        cout << endl << "Senha digitada diferente da cadastrada.";
        cout << endl << endl << "Digite algo para continuar.";
        getch();
        return false;
    }
    catch(EErroPersistencia &exp) {
        cout << endl << exp.what();
        cout << endl << endl << "Digite algo para continuar.";
        getch();
        return false;
    }

}

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora servi�o pessoal.


//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora servi�o produtos financeiros.



