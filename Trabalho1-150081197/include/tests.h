#ifndef TESTS_H
#define TESTS_H
#include <iostream>
#include <string>
#include <vector>
#include "domains.h"

using namespace std;

/** Declara��o do Teste de unidade da classe ZipCode. **/
class TUZipCode{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const static int validValue = 70000000;
    const static int invalidValue = 30;
    const static int invalidValue1 = 26600999;

    ZipCode *zipCode;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario(int);

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

/** Declara��o do Teste de unidade da classe Clazz. **/
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

/** Declara��o do Teste de unidade da classe AgencyCode. **/
class TUAgencyCode{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const vector<int> validValue{0,2,5,9};
    const vector<int> invalidValue{0,0,0,0};
    const vector<int> invalidValue1{0,0,4,0,5};
    const vector<int> invalidValue2{1,0,4,};

    AgencyCode *agencyCode;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario(vector<int> );

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

/** Declara��o do Teste de unidade da classe AplicationCode. **/
class TUAplicationCode{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const vector<int> validValue{0,2,5,9,1};
    const vector<int> invalidValue{0,0,0,0,0};
    const vector<int> invalidValue1{1,3,0,4,0,9};
    const vector<int> invalidValue2{9,2,5,7};

    AplicationCode *aplicationCode;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario(vector<int>);

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

/** Declara��o do Teste de unidade da classe BankCode. **/
class TUBankCode{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.
    const static int validValue = 033;
    const static int invalidValue = 897;
    const static int invalidValue1 = 8971;

    BankCode *bankCode;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario(int);

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

/** Declara��o do Teste de unidade da classe ProductCode**/
class TUProductCode{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const vector<int> validValue{0,2,5};
    const vector<int> invalidValue{0,0,0};
    const vector<int> invalidValue1{1,2,3,4};

    ProductCode *productCode;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario(vector<int> );

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

/** Declara��o do Teste de unidade da classe Clazz. **/
class TUCpf{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const string validValue = "045.633.831-47";
    const string invalidValue = "045.633.831-07";
    const string invalidValue1 = "045.633.83-07";
    const string invalidValue2 = "0A5.63B.8*1-47";
    const string invalidValue3 = "045.633831-47";

    Cpf *cpf;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario(string);

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

/** Declara��o do Teste de unidade da classe Date. **/
class TUDatee{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const string validValue = "02/02/2020";
    const string invalidValue = "03/04/221";
    const string invalidValue1 = "29/02/2021";
    const string invalidValue2 = "31/04/2022";
    const string invalidValue3 = "31/04/2122";

    Datee *datee;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario(string);

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

/** Declara��o do Teste de unidade da classe Date. **/
class TUEmitter{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const string validValue = "Joa4578od 7Jul8io Lua.n-k";
    const string invalidValue = "tt-.7oe.r Add895..Agr";
    const string invalidValue1 = "Joa4578od 7Jul8io lua.n-k";
    const string invalidValue2 = "Joa4578od 7Jul8io lua.n-k Test-ede Tamanhode TExto. DessaString Send-oPossivel Apenas30Char";

    Emitter *emitter;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario(string);

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

/** Declara��o do Teste de unidade da classe Address. **/
class TUAddress{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const string validValue = "Av.Arlindo Bloco0";
    const string invalidValue = "Av. arlindo Bloco";
    const string invalidValue1 = "Av. A?rlindo Bloco";
    const string invalidValue2 = "Av. Arlindo Bloco TestedeTamanho DaString";

    Address *address;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario(string);

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
    const string invalidValue1 = "16:69";

    Time *time;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario(string);

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

/** Declara��o do Teste de unidade da classe Name**/
class TUName{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const string validValue = "Nametr";
    const string invalidValue = "A B V";
    const string invalidValue1 = " name";
    const string invalidValue2 = "Name sobrenome Nome";
    const string invalidValue3 = "Name com  espa�os";
    const string invalidValue4 = "Name Sobrenome OutroNome Tamanho";

    Name *name;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario(string);

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

/** Declara��o do Teste de unidade da classe Number**/
class TUNumber{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.
    const string validValue = "123456-8";
    const string invalidValue = "12345097";
    const string invalidValue1 = "123450-87";

    Number *number;         // Refer�ncia para o objeto a ser testado.
    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario(string);

public:

    // Defini��es de constantes para reportar resultado do teste.
    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

/** Declara��o do Teste de unidade da classe Term **/
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

/** Declara��o do Teste de unidade da classe Password**/
class TUPassword{
private:

    // Defini��es de constantes com o intuito de evitar numeros m�gicos.

    const string validValue = "123456";
    const string invalidValue = "15234";
    const string invalidValue1 = "152344";

    Password *password;         // Refer�ncia para o objeto a ser testado.

    int state;             // Estado do teste.

    void setUp();
    void tearDown();
    void testSucessScenario();
    void testFailureScenario(string);

public:
    // Defini��es de constantes para reportar resultado do teste.

    const static int sucess =  0;
    const static int failure  = -1;

    int run();
};

/** Declara��o do Teste de unidade da classe Fee**/
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

/** Declara��o do Teste de unidade da classe AplicationValue**/
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

/** Declara��o do Teste de unidade da classe MinimumValue**/
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
