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
bool CntrServicoPessoal::registerUser(User user){
    ComandInsertUser comandInsertUse(user);
    try {

        comandInsertUse.executar();
        return true;

    }catch(EErroPersistencia &exp) {
        cout << endl << exp.what();
        cout << endl << endl << "Digite algo para continuar.";
        getch();
        return false;
    }
}

User CntrServicoPessoal::getUser(Cpf cpf){
    User user;
    ComandGetUser comandGetUser(cpf);
    try{
        comandGetUser.executar();
        user = comandGetUser.getResult();
        return user;
    }catch(EErroPersistencia &exp) {
        cout << endl << exp.what();
        cout << endl << endl << "Digite algo para continuar.";
        getch();
        return user;
    }
}


//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora servi�o produtos financeiros.

bool CntrServicoProdutosFinanceiros::registerCount(Cpf cpf, Count countt){
    ComandInsertCount comandInsertCount(cpf, countt);
    try {
        comandInsertCount.executar();
        return true;
    }catch(EErroPersistencia &exp) {
        cout << endl << exp.what();
        cout << endl << endl << "Digite algo para continuar.";
        getch();
        return false;
    }
}

Count CntrServicoProdutosFinanceiros::getCount(Cpf cpf){
    ComandGetCount comandGetCount(cpf);
    Count countt;
     try {
        comandGetCount.executar();
        countt = comandGetCount.getResult();

        return countt;;
    }catch(EErroPersistencia &exp) {
        cout << endl << exp.what();
        cout << endl << endl << "Digite algo para continuar.";
        getch();
        return countt;
    }

}

list<Product> CntrServicoProdutosFinanceiros::getProducts(Clazz clazz){
    list<Product> products;
    ComandGetProduct comandGetProduct(clazz);

    try {
        comandGetProduct.executar();
        products = comandGetProduct.getResult();
        return products;

    }catch(EErroPersistencia &exp) {
        cout << endl << exp.what();
        cout << endl << endl << "Digite algo para continuar.";
        getch();
        return products;
    }

}

bool CntrServicoProdutosFinanceiros::registerProduct(Product product){
    ComandInsertProduct comandInsertProduct(product);

    try {
        comandInsertProduct.executar();
        return true;
    }catch(EErroPersistencia &exp) {
        cout << endl << exp.what();
        cout << endl << endl << "Digite algo para continuar.";
        getch();
        return false;
    }
}

bool CntrServicoProdutosFinanceiros::deleteProduct(ProductCode productCode){
    ComandDeleteProduct comandDeleteProduct(productCode);

    try {
        comandDeleteProduct.executar();
        return true;
    }catch(EErroPersistencia &exp) {
        cout << endl << exp.what();
        cout << endl << endl << "Digite algo para continuar.";
        getch();
        return false;
    }
}


