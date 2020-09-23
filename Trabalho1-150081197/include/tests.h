#ifndef TESTS_H
#define TESTS_H
#include <iostream>
#include <string>
#include <vector>
#include "domains.h"

using namespace std;

/// Teste de unidade da classe ZipCode.
class TUZipCode{
private:

    const static int validValue = 70000000;
    const static int invalidValue = 30;

    ZipCode *zipCode;         // Referencia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailScenario();

public:

    const static int sucess =  0;
    const static int fail  = -1;

    int run();
};

/// Teste de unidade da classe Clazz.
class TUClazz{
private:

    const string validValue = "LCI";
    const string invalidValue = "ABC";

    Clazz *clazz;         // Referencia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailScenario();

public:

    const static int sucess =  0;
    const static int fail  = -1;

    int run();
};

/// Teste de unidade da classe AgencyCode.
class TUAgencyCode{
private:

    const vector<int> validValue{0,2,5,9};
    const vector<int> invalidValue{0,0,0,0};

    AgencyCode *agencyCode;         // Referencia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailScenario();

public:

    const static int sucess =  0;
    const static int fail  = -1;

    int run();
};

/// Teste de unidade da classe AplicationCode.
class TUAplicationCode{
private:

    const vector<int> validValue{0,2,5,9,1};
    const vector<int> invalidValue{0,0,0,0,0};

    AplicationCode *aplicationCode;         // Referencia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailScenario();

public:

    const static int sucess =  0;
    const static int fail  = -1;

    int run();
};

/// Teste de unidade da classe BankCode.
class TUBankCode{
private:

    const static int validValue = 033;
    const static int invalidValue = 897;

    BankCode *bankCode;         // Referencia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailScenario();

public:

    const static int sucess =  0;
    const static int fail  = -1;

    int run();
};

/// Teste de unidade da classe ProductCode
class TUProductCode{
private:

    const vector<int> validValue{0,2,5};
    const vector<int> invalidValue{0,0,0};

    ProductCode *productCode;         // Referencia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailScenario();

public:

    const static int sucess =  0;
    const static int fail  = -1;

    int run();
};

/// Teste de unidade da classe Clazz.
class TUCpf{
private:

    const string validValue = "045.633.831-47";
    const string invalidValue = "111.111.111-11";

    Cpf *cpf;         // Referencia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailScenario();

public:

    const static int sucess =  0;
    const static int fail  = -1;

    int run();
};

/// Teste de unidade da classe Date.
class TUDatee{
private:

    const string validValue = "02/02/2020";
    const string invalidValue = "03/04/2221";

    Datee *datee;         // Referencia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailScenario();

public:

    const static int sucess =  0;
    const static int fail  = -1;

    int run();
};

/// Teste de unidade da classe Date.
class TUEmitter{
private:

    const string validValue = "Joa4578od 7Jul8io Lua.n-k";
    const string invalidValue = "Joa4578od 7Jul8io lua.n-k Test-ede tamanhode TExto. DessaString Send-oPossivel Apenas30Char";

    Emitter *emitter;         // Referencia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailScenario();

public:

    const static int sucess =  0;
    const static int fail  = -1;

    int run();
};

/// Teste de unidade da classe Address.
class TUAddress{
private:

    const string validValue = "Av.Arlindo Bloco0";
    const string invalidValue = "Av. arlindo Bloco";

    Address *address;         // Referencia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailScenario();

public:

    const static int sucess =  0;
    const static int fail  = -1;

    int run();
};

/// Declaração do Teste de unidade da classe Time
class TUTime{
private:

    const string validValue = "13:00";
    const string invalidValue = "17:13";

    Time *time;         // Referencia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailScenario();

public:

    const static int sucess =  0;
    const static int fail  = -1;

    int run();
};

/// Teste de unidade da classe Name
class TUName{
private:

    const string validValue = "Nametr";
    const string invalidValue = "A B V";

    Name *name;         // Referencia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailScenario();

public:

    const static int sucess =  0;
    const static int fail  = -1;

    int run();
};

/// Teste de unidade da classe Number
class TUNumber{
private:

    const string validValue = "261533-9";
    const string invalidValue = "123430-7";

    Number *number;         // Referencia para o objeto a ser testado.
    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailScenario();

public:

    const static int sucess =  0;
    const static int fail  = -1;

    int run();
};

/// Teste de unidade da classe Term
class TUTerm{
private:

    const static int validValue = 60;
    const static int invalidValue = 22;

    Term *term;         // Referencia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailScenario();

public:

    const static int sucess =  0;
    const static int fail  = -1;

    int run();
};

/// Teste de unidade da classe Password
class TUPassword{
private:

    const string validValue = "123456";
    const string invalidValue = "15234";

    Password *password;         // Referencia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailScenario();

public:

    const static int sucess =  0;
    const static int fail  = -1;

    int run();
};

/// Teste de unidade da classe Fee
class TUFee{
private:

    const static int validValue = 150;
    const static int invalidValue = 300;

    Fee *fee;         // Referencia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailScenario();

public:

    const static int sucess =  0;
    const static int fail  = -1;

    int run();
};

/// Teste de unidade da classe AplicationValue
class TUAplicationValue{
private:

    const double validValue = 9000.00;
    const double invalidValue = -23.00;

    AplicationValue *aplicationValue;         // Referencia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailScenario();

public:

    const static int sucess =  0;
    const static int fail  = -1;

    int run();
};

/// Teste de unidade da classe MinimumValue
class TUMinimumValue{
private:

    const double validValue  = 1000.00;
    const double invalidValue  = 2500.00;

    MinimumValue *minimumValue;         // Referencia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailScenario();

public:

    const static int sucess =  0;
    const static int fail  = -1;

    int run();
};

#endif // TESTS_H
