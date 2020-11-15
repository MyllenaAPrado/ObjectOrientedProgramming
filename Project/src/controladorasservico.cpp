#include "controladorasservico.h"
#include "database.h"

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Implementar métodos das controladoras de serviço.
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------
// Implementações dos métodos das classes controladoras da camada de serviço.


//--------------------------------------------------------------------------------------------
// Implementações dos métodos da classe controladora serviço autenticação.
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
// Implementações dos métodos da classe controladora serviço pessoal.


//--------------------------------------------------------------------------------------------
// Implementações dos métodos da classe controladora serviço produtos financeiros.



