#include <iostream>
#include "dominios.h"
#include "testes.h"

using namespace std;

int main()
{

    TUZipCode zipCode;

    switch(zipCode.run()){
        case TUZipCode::SUCESS: cout << "SUCESSO";
                                break;
        case TUZipCode::FAILURE: cout << "FALHA";
                                break;
    }

    TUClazz clazz;

    switch(clazz.run()){
        case TUClazz::SUCESS: cout << "SUCESSO";
                                break;
        case TUClazz::FAILURE: cout << "FALHA";
                                break;
    }

    return 0;
}
