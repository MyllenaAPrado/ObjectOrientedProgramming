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

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static int validValue = 70000000;
    const static int invalidValue = 30;

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

/** Teste de unidade da classe Clazz. **/
class TUClazz{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.
    const string validValue = "LCI";
    const string invalidValue = "ABC";

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

/** Teste de unidade da classe AgencyCode. **/
class TUAgencyCode{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const vector<int> validValue{0,2,5,9};
    const vector<int> invalidValue{0,0,0,0};

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

/** Teste de unidade da classe AplicationCode. **/
class TUAplicationCode{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const vector<int> validValue{0,2,5,9,1};
    const vector<int> invalidValue{0,0,0,0,0};

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

/** Teste de unidade da classe BankCode. **/
class TUBankCode{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.
    const static int validValue = 033;
    const static int invalidValue = 897;

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

/** Teste de unidade da classe ProductCode**/
class TUProductCode{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const vector<int> validValue{0,2,5};
    const vector<int> invalidValue{0,0,0};

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

/** Teste de unidade da classe Clazz. **/
class TUCpf{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const string validValue = "045.633.831-47";
    const string invalidValue = "045.633.831-07";

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

/** Teste de unidade da classe Date. **/
class TUDatee{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const string validValue = "02/02/2020";
    const string invalidValue = "03/04/2221";

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

/** Teste de unidade da classe Date. **/
class TUEmitter{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const string validValue = "Joa4578od 7Jul8io Lua.n-k";
    const string invalidValue = "Joa4578od 7Jul8io lua.n-k Test-ede tamanhode TExto. DessaString Send-oPossivel Apenas30Char";

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

/** Teste de unidade da classe Address. **/
class TUAddress{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const string validValue = "Av.Arlindo Bloco0";
    const string invalidValue = "Av. arlindo Bloco";

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

/** Declara��o do Teste de unidade da classe Time **/
class TUTime{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const string validValue = "13:00";
    const string invalidValue = "12:13";

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

/** Teste de unidade da classe Name**/
class TUName{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const string validValue = "Nametr";
    const string invalidValue = "A B V";

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

/** Teste de unidade da classe Number**/
class TUNumber{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.
    const string validValue = "123456-8";
    const string invalidValue = "12345097";

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

/** Teste de unidade da classe Term **/
class TUTerm{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static int validValue = 60;
    const static int invalidValue = 22;

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

/** Teste de unidade da classe Password**/
class TUPassword{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const string validValue = "123456";
    const string invalidValue = "15234";

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

/** Teste de unidade da classe Fee**/
class TUFee{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static int validValue = 150;
    const static int invalidValue = 300;

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

/** Teste de unidade da classe AplicationValue**/
class TUAplicationValue{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const double validValue = 9000.00;
    const double invalidValue = -23.00;

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

/** Teste de unidade da classe MinimumValue**/
class TUMinimumValue{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const double validValue  = 1000.00;
    const double invalidValue  = 2500.00;

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
