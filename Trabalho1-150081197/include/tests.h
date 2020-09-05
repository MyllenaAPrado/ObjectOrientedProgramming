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

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static int validValue;
    const static int invalidValue;

    ZipCode *zipCode;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe Clazz.
class TUClazz{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static string validValue;
    const static string invalidValue;

    Clazz *clazz;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe AgencyCode.
class TUAgencyCode{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static vector<int> validValue;
    const static vector<int> invalidValue;

    AgencyCode *agencyCode;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe AplicationCode.
class TUAplicationCode{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static vector<int> validValue;
    const static vector<int> invalidValue;

    AplicationCode *aplicationCode;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe BankCode.
class TUBankCode{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static int validValue;
    const static int invalidValue;

    BankCode *bankCode;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

class TUProductCode{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static vector<int> validValue;
    const static vector<int> invalidValue;

    ProductCode *productCode;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};


// Teste de unidade da classe Clazz.
class TUCpf{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static string validValue;
    const static string invalidValue;

    Cpf *cpf;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe Date.
class TUDatee{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static string validValue;
    const static string invalidValue;

    Datee *datee;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};


// Teste de unidade da classe Date.
class TUEmitter{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static string validValue;
    const static string invalidValue;

    Emitter *emitter;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};


// Teste de unidade da classe Address
class TUAddress{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static string validValue;
    const static string invalidValue;

    Address *address;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};


// Teste de unidade da classe Address
class TUTime{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static string validValue;
    const static string invalidValue;

    Time *time;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe Name
class TUName{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static string validValue;
    const static string invalidValue;

    Name *name;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe Number
class TUNumber{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static string validValue;
    const static string invalidValue;

    Number *number;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe Number
class TUTerm{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static int validValue;
    const static int invalidValue;

    Term *term;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe Password
class TUPassword{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static string validValue;
    const static string invalidValue;

    Password *password;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe Fee
class TUFee{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static int validValue;
    const static int invalidValue;

    Fee *fee;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

// Teste de unidade da classe AplicationValue
class TUAplicationValue{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static double validValue;
    const static double invalidValue;

    AplicationValue *aplicationValue;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};


// Teste de unidade da classe MinimumValue
class TUMinimumValue{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static double validValue;
    const static double invalidValue;

    MinimumValue *minimumValue;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario();

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};



#endif // TESTS_H
