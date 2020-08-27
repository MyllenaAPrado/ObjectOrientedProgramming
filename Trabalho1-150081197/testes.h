#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED
#include <iostream>
#include <string>
#include "dominios.h"
using namespace std;
// Teste de unidade de classe que representa um domínio.

class TUZipCode{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static int VALID_VALUE   = 70000000;
    const static int INVALID_VALUE = 30;

    ZipCode *zipCode;         // Referência para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int SUCESS =  0;
    const static int FAILURE  = -1;

    int run();
};

// Teste de unidade de classe que representa um domínio.

class TUClazz{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static string VALID_VALUE("LC");
    const static string INVALID_VALUE ("ABC");

    Clazz *clazz;         // Referência para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int SUCESS =  0;
    const static int FAILURE  = -1;

    int run();
};
#endif // TESTES_H_INCLUDED
