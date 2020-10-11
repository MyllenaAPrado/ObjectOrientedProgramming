#ifndef ENTITIESTESTS_H
#define ENTITIESTESTS_H
#include <iostream>
#include <string>
#include <vector>
#include "domains.h"
#include "entities.h"


/// Teste de unidade da classe de entidade Aplication
class TUAplication{
private:

    const vector<int> CODE{0,2,5,9,1};
    const double VALUE = 9000.00;
    const string DATEE = "02/02/2020";

    Aplication *aplication; // Referencia para o objeto a ser testado.

    int state; // Estado do teste.
    void setUp();
    void tearDown();
    void testSucessScenarioCode();
    void testSucessScenarioValue();
    void testSucessScenarioDatee();

public:
    const static int sucess =  0;
    const static int fail  = -1;

    int run();

};

/// Teste de unidade da classe de entidade Count
class TUCount{
private:

    const static int BANK = 033;
    const vector<int> AGENCY{0,2,5,9};
    const string NUMBER = "261533-9";

    Count *countt; // Referencia para o objeto a ser testado.

    int state; // Estado do teste.
    void setUp();
    void tearDown();
    void testSucessScenarioBank();
    void testSucessScenarioAgency();
    void testSucessScenarioNumber();

public:
    const static int sucess =  0;
    const static int fail  = -1;

    int run();

};

/// Teste de unidade da classe de entidade Product
class TUProduct{
private:

    const vector<int> CODE{0,2,5};
    const string CLAZZ = "LCI";
    const string EMITTER = "Joa4578od 7Jul8io Lua.n-k";
    const static int TERM = 60;
    const string DUEDATEE = "02/02/2020";
    const static int FEE = 150;
    const string TIME = "13:00";
    const double VALUE  = 1000.00;

    Product *product; // Referencia para o objeto a ser testado.

    int state; // Estado do teste.
    void setUp();
    void tearDown();
    void testSucessScenarioCode();
    void testSucessScenarioClazz();
    void testSucessScenarioEmitter();
    void testSucessScenarioTerm();
    void testSucessScenarioDueDatee();
    void testSucessScenarioFee();
    void testSucessScenarioTime();
    void testSucessScenarioValue();

public:
    const static int sucess =  0;
    const static int fail  = -1;

    int run();

};

/// Teste de unidade da classe de entidade User
class TUUser{
private:

    const string NAME = "Nametr";
    const string ADDRESS = "Av.Arlindo Bloco0";
    const static int ZIPCODE = 70000000;
    const string CPF = "045.633.831-47";
    const string PASSWORD = "123456";

    User *user; // Referencia para o objeto a ser testado.

    int state; // Estado do teste.
    void setUp();
    void tearDown();
    void testSucessScenarioName();
    void testSucessScenarioAddress();
    void testSucessScenarioZipCode();
    void testSucessScenarioCpf();
    void testSucessScenarioPassword();

public:

    const static int sucess =  0;
    const static int fail  = -1;

    int run();

};



#endif // ENTITIESTESTS_H
