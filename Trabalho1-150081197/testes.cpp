#include "testes.h"
//Definições de constantes.

const int TUZipCode::SUCESS;
const int TUZipCode::FAILURE;
const int TUZipCode::VALID_VALUE;
const int TUZipCode::INVALID_VALUE;

// Definições de métodos da classe TUZipCode.

void TUZipCode::setUp(){
    zipCode = new ZipCode();
    state = SUCESS;
}

void TUZipCode::tearDown(){
    delete zipCode;
}

void TUZipCode::testSucessScenario(){
    try{
        zipCode->setZipCode(VALID_VALUE);
        if (zipCode->getZipCode() != VALID_VALUE)
            state = FAILURE;
    }
    catch(invalid_argument excecao){
        state = FAILURE;
    }
}

void TUZipCode::testFailureScenario(){
    try{
        zipCode->setZipCode(INVALID_VALUE);
        state = FAILURE;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUZipCode::run(){
    setUp();
    testSucessScenario();
    testFailureScenario();
    tearDown();
    return state;
}


//Definições de constantes.

const int TUClazz::SUCESS;
const int TUClazz::FAILURE;
const string TUClazz::VALID_VALUE;
const string TUClazz::INVALID_VALUE;

// Definições de métodos da classe TUClazz.

void TUClazz::setUp(){
    clazz = new Clazz();
    state = SUCESS;
}

void TUClazz::tearDown(){
    delete clazz;
}

void TUClazz::testSucessScenario(){
    try{
        clazz->setClazz(VALID_VALUE);
        if (clazz->getZipCode() != VALID_VALUE)
            state = FAILURE;
    }
    catch(invalid_argument excecao){
        state = FAILURE;
    }
}

void TUClazz::testFailureScenario(){
    try{
        clazz->setClazz(INVALID_VALUE);
        state = FAILURE;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUClazz::run(){
    setUp();
    testSucessScenario();
    testFailureScenario();
    tearDown();
    return state;
}


