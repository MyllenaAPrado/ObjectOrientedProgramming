#ifndef TESTS_H
#define TESTS_H
#include <iostream>
#include <string>
#include <vector>
#include "domains.h"

using namespace std;
// Teste de unidade da classe ZipCode.

class TUZipCode{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static int validValue;
    const static int invalidValue;

    ZipCode *zipCode;         // Referência para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe Clazz.
class TUClazz{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static string validValue;
    const static string invalidValue;

    Clazz *clazz;         // Referência para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe AgencyCode.
class TUAgencyCode{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static vector<int> validValue;
    const static vector<int> invalidValue;

    AgencyCode *agencyCode;         // Referência para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe AplicationCode.
class TUAplicationCode{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static vector<int> validValue;
    const static vector<int> invalidValue;

    AplicationCode *aplicationCode;         // Referência para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe BankCode.
class TUBankCode{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static int validValue;
    const static int invalidValue;

    BankCode *bankCode;         // Referência para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

class TUProductCode{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static vector<int> validValue;
    const static vector<int> invalidValue;

    ProductCode *productCode;         // Referência para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};


// Teste de unidade da classe Clazz.
class TUCpf{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static string validValue;
    const static string invalidValue;

    Cpf *cpf;         // Referência para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe Date.
class TUDatee{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static string validValue;
    const static string invalidValue;

    Datee *datee;         // Referência para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};


// Teste de unidade da classe Date.
class TUEmitter{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static string validValue;
    const static string invalidValue;

    Emitter *emitter;         // Referência para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};


// Teste de unidade da classe Address
class TUAddress{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static string validValue;
    const static string invalidValue;

    Address *address;         // Referência para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};


// Teste de unidade da classe Address
class TUTime{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static string validValue;
    const static string invalidValue;

    Time *time;         // Referência para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe Name
class TUName{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static string validValue;
    const static string invalidValue;

    Name *name;         // Referência para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe Number
class TUNumber{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static string validValue;
    const static string invalidValue;

    Number *number;         // Referência para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe Number
class TUTerm{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static int validValue;
    const static int invalidValue;

    Term *term;         // Referência para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe Password
class TUPassword{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static string validValue;
    const static string invalidValue;

    Password *password;         // Referência para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe Fee
class TUFee{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static int validValue;
    const static int invalidValue;

    Fee *fee;         // Referência para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe AplicationValue
class TUAplicationValue{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static double validValue;
    const static double invalidValue;

    AplicationValue *aplicationValue;         // Referência para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};


// Teste de unidade da classe MinimumValue
class TUMinimumValue{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static double validValue;
    const static double invalidValue;

    MinimumValue *minimumValue;         // Referência para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};



#endif // TESTS_H
