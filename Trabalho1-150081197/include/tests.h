#ifndef TESTS_H
#define TESTS_H
#include <iostream>
#include <string>
#include <vector>
#include "domains.h"

using namespace std;

/** Teste de unidade da classe ZipCode. **/
class TUZipCode{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static int validValue = 70000000;
    const static int invalidValue = 30;

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

/** Teste de unidade da classe Clazz. **/
class TUClazz{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.
    const string validValue = "LCI";
    const string invalidValue = "ABC";

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

/** Teste de unidade da classe AgencyCode. **/
class TUAgencyCode{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const vector<int> validValue{0,2,5,9};
    const vector<int> invalidValue{0,0,0,0};

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

/** Teste de unidade da classe AplicationCode. **/
class TUAplicationCode{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const vector<int> validValue{0,2,5,9,1};
    const vector<int> invalidValue{0,0,0,0,0};

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

/** Teste de unidade da classe BankCode. **/
class TUBankCode{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.
    const static int validValue = 033;
    const static int invalidValue = 897;

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

/** Teste de unidade da classe ProductCode**/
class TUProductCode{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const vector<int> validValue{0,2,5};
    const vector<int> invalidValue{0,0,0};

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

/** Teste de unidade da classe Clazz. **/
class TUCpf{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const string validValue = "045.633.831-47";
    const string invalidValue = "045.633.831-07";

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

/** Teste de unidade da classe Date. **/
class TUDatee{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const string validValue = "02/02/2020";
    const string invalidValue = "03/04/2221";

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

/** Teste de unidade da classe Date. **/
class TUEmitter{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const string validValue = "Joa4578od 7Jul8io Lua.n-k";
    const string invalidValue = "Joa4578od 7Jul8io lua.n-k Test-ede tamanhode TExto. DessaString Send-oPossivel Apenas30Char";

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

/** Teste de unidade da classe Address. **/
class TUAddress{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const string validValue = "Av.Arlindo Bloco0";
    const string invalidValue = "Av. arlindo Bloco";

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

/** Declaração do Teste de unidade da classe Time **/
class TUTime{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const string validValue = "13:00";
    const string invalidValue = "12:13";

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

/** Teste de unidade da classe Name**/
class TUName{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const string validValue = "Nametr";
    const string invalidValue = "A B V";

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

/** Teste de unidade da classe Number**/
class TUNumber{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.
    const string validValue = "123456-8";
    const string invalidValue = "12345097";

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

/** Teste de unidade da classe Term **/
class TUTerm{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static int validValue = 60;
    const static int invalidValue = 22;

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

/** Teste de unidade da classe Password**/
class TUPassword{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const string validValue = "123456";
    const string invalidValue = "15234";

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

/** Teste de unidade da classe Fee**/
class TUFee{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const static int validValue = 150;
    const static int invalidValue = 300;

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

/** Teste de unidade da classe AplicationValue**/
class TUAplicationValue{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const double validValue = 9000.00;
    const double invalidValue = -23.00;

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

/** Teste de unidade da classe MinimumValue**/
class TUMinimumValue{
private:

    // Definições de constantes com o intuito de evitar numeros mágicos.

    const double validValue  = 1000.00;
    const double invalidValue  = 2500.00;

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
