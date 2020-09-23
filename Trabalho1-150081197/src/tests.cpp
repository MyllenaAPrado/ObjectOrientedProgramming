#include "tests.h"

// Definições de métodos da classe TUZipCode.
void TUZipCode::setUp(){
    zipCode = new ZipCode();
    state = sucess;
}
void TUZipCode::tearDown(){
    delete zipCode;
}
void TUZipCode::testSucessScenario(){
    try{
        zipCode->setZipCode(validValue);
        if (zipCode->getZipCode() != validValue)
            state = fail;
    }
    catch(invalid_argument excecao){
        state = fail;
    }
}
void TUZipCode::testFailScenario(){
    try{
        zipCode->setZipCode(invalidValue);
        state = fail;
    }
    catch(invalid_argument excecao){
        if (zipCode->getZipCode() == invalidValue)
            state = fail;
        return;
    }
}
int TUZipCode::run(){
    setUp();
    testSucessScenario();
    testFailScenario();
    tearDown();
    return state;
}

// Definições de métodos da classe TUClazz.
void TUClazz::setUp(){
    clazz = new Clazz();
    state = sucess;
}
void TUClazz::tearDown(){
    delete clazz;
}
void TUClazz::testSucessScenario(){
    try{
        clazz->setClazz(validValue);
        if (clazz->getClazz() != validValue)
            state = fail;
    }
    catch(invalid_argument excecao){
        state = fail;
    }
}
void TUClazz::testFailScenario(){
    try{
        clazz->setClazz(invalidValue);
        state = fail;
    }
    catch(invalid_argument excecao){
        if (clazz->getClazz() == invalidValue)
            state = fail;
        return;
    }
}
int TUClazz::run(){
    setUp();
    testSucessScenario();
    testFailScenario();
    tearDown();
    return state;
}

// Definições de métodos da classe TUAgencyCode.
void TUAgencyCode::setUp(){
    agencyCode = new AgencyCode();
    state = sucess;
}
void TUAgencyCode::tearDown(){
    delete agencyCode;
}
void TUAgencyCode::testSucessScenario(){
    try{
        agencyCode->setCode(validValue);
        if (agencyCode->getCode() != validValue)
            state = fail;
    }
    catch(invalid_argument excecao){
        state = fail;
    }
}
void TUAgencyCode::testFailScenario(){
    try{
        agencyCode->setCode(invalidValue);
        state = fail;
    }
    catch(invalid_argument excecao){
        if (agencyCode->getCode() == invalidValue)
            state = fail;
        return;
    }
}
int TUAgencyCode::run(){
    setUp();
    testSucessScenario();
    testFailScenario();
    tearDown();
    return state;
}

// Definições de métodos da classe TUAplicationCode.
void TUAplicationCode::setUp(){
    aplicationCode = new AplicationCode();
    state = sucess;
}
void TUAplicationCode::tearDown(){
    delete aplicationCode;
}
void TUAplicationCode::testSucessScenario(){
    try{
        aplicationCode->setCode(validValue);
        if (aplicationCode->getCode() != validValue)
            state = fail;
    }
    catch(invalid_argument excecao){
        state = fail;
    }
}
void TUAplicationCode::testFailScenario(){
    try{
        aplicationCode->setCode(invalidValue);
        state = fail;
    }
    catch(invalid_argument excecao){
        if (aplicationCode->getCode() == invalidValue)
            state = fail;
        return;
    }
}
int TUAplicationCode::run(){
    setUp();
    testSucessScenario();
    testFailScenario();
    tearDown();
    return state;
}

// Definições de métodos da classe TUBankCode.
void TUBankCode::setUp(){
    bankCode = new BankCode();
    state = sucess;
}
void TUBankCode::tearDown(){
    delete bankCode;
}
void TUBankCode::testSucessScenario(){
    try{
        bankCode->setCode(validValue);
        if (bankCode->getCode() != validValue)
            state = fail;
    }
    catch(invalid_argument excecao){
        state = fail;
    }
}
void TUBankCode::testFailScenario(){
    try{
        bankCode->setCode(invalidValue);
        state = fail;
    }
    catch(invalid_argument excecao){
        if (bankCode->getCode() == invalidValue)
            state = fail;
        return;
    }
}
int TUBankCode::run(){
    setUp();
    testSucessScenario();
    testFailScenario();
    tearDown();
    return state;
}

// Definições de métodos da classe TUProductCode.
void TUProductCode::setUp(){
    productCode = new ProductCode();
    state = sucess;
}
void TUProductCode::tearDown(){
    delete productCode;
}
void TUProductCode::testSucessScenario(){
    try{
        productCode->setCode(validValue);
        if (productCode->getCode() != validValue)
            state = fail;
    }
    catch(invalid_argument excecao){
        state = fail;
    }
}
void TUProductCode::testFailScenario(){
    try{
        productCode->setCode(invalidValue);
        state = fail;
    }
    catch(invalid_argument excecao){
        if (productCode->getCode() == invalidValue)
            state = fail;
        return;
    }
}
int TUProductCode::run(){
    setUp();
    testSucessScenario();
    testFailScenario();
    tearDown();
    return state;
}


// Definições de métodos da classe TUCpf.
void TUCpf::setUp(){
    cpf = new Cpf();
    state = sucess;
}
void TUCpf::tearDown(){
    delete cpf;
}
void TUCpf::testSucessScenario(){
    try{
        cpf->setCpf(validValue);
        if (cpf->getCpf() != validValue)
            state = fail;
    }
    catch(invalid_argument excecao){
        state = fail;
    }
}
void TUCpf::testFailScenario(){
    try{
        cpf->setCpf(invalidValue);
        state = fail;
    }
    catch(invalid_argument excecao){
        if (cpf->getCpf() == invalidValue)
            state = fail;
        return;
    }
}
int TUCpf::run(){
    setUp();
    testSucessScenario();
    testFailScenario();
    tearDown();
    return state;
}

// Definições de métodos da classe TUDate.
void TUDatee::setUp(){
    datee = new Datee();
    state = sucess;
}
void TUDatee::tearDown(){
    delete datee;
}
void TUDatee::testSucessScenario(){
    try{
        datee->setDatee(validValue);
        if (datee->getDatee() != validValue)
            state = fail;
    }
    catch(invalid_argument excecao){
        state = fail;
    }
}
void TUDatee::testFailScenario(){
    try{
        datee->setDatee(invalidValue);
        state = fail;
    }
    catch(invalid_argument excecao){
        if (datee->getDatee() == invalidValue)
            state = fail;
        return;
    }
}
int TUDatee::run(){
    setUp();
    testSucessScenario();
    testFailScenario();
    tearDown();
    return state;
}

// Definições de métodos da classe TUEmitter.
void TUEmitter::setUp(){
    emitter = new Emitter();
    state = sucess;
}
void TUEmitter::tearDown(){
    delete emitter;
}
void TUEmitter::testSucessScenario(){
    try{
        emitter->setEmitter(validValue);
        if (emitter->getEmitter() != validValue)
            state = fail;
    }
    catch(invalid_argument excecao){
        state = fail;
    }
}
void TUEmitter::testFailScenario(){
    try{
        emitter->setEmitter(invalidValue);
        state = fail;
    }
    catch(invalid_argument excecao){
        if (emitter->getEmitter() == invalidValue)
            state = fail;
        return;
    }
}
int TUEmitter::run(){
    setUp();
    testSucessScenario();
    testFailScenario();
    tearDown();
    return state;
}

// Definições de métodos da classe TUAddress.
void TUAddress::setUp(){
    address = new Address();
    state = sucess;
}
void TUAddress::tearDown(){
    delete address;
}
void TUAddress::testSucessScenario(){
    try{
        address->setAddress(validValue);
        if (address->getAddress() != validValue)
            state = fail;
    }
    catch(invalid_argument excecao){
        state = fail;
    }
}
void TUAddress::testFailScenario(){
    try{
        address->setAddress(invalidValue);
        state = fail;
    }
    catch(invalid_argument excecao){
        if (address->getAddress() == invalidValue)
            state = fail;
        return;
    }
}
int TUAddress::run(){
    setUp();
    testSucessScenario();
    testFailScenario();
    tearDown();
    return state;
}

// Definições de métodos da classe TUTime.
void TUTime::setUp(){
    time = new Time();
    state = sucess;
}
void TUTime::tearDown(){
    delete time;
}
void TUTime::testSucessScenario(){
    try{
        time->setTime(validValue);
        if (time->getTime() != validValue)
            state = fail;
    }
    catch(invalid_argument excecao){
        state = fail;
    }
}
void TUTime::testFailScenario(){
    try{
        time->setTime(invalidValue);
        state = fail;
    }
    catch(invalid_argument excecao){
        if (time->getTime() == invalidValue)
            state = fail;
        return;
    }
}
int TUTime::run(){
    setUp();
    testSucessScenario();
    testFailScenario();
    tearDown();
    return state;
}

// Definições de métodos da classe TUName.
void TUName::setUp(){
    name = new Name();
    state = sucess;
}
void TUName::tearDown(){
    delete name;
}
void TUName::testSucessScenario(){
    try{
        name->setName(validValue);
        if (name->getName() != validValue)
            state = fail;
    }
    catch(invalid_argument excecao){
        state = fail;
    }
}
void TUName::testFailScenario(){
    try{
        name->setName(invalidValue);
        state = fail;
    }
    catch(invalid_argument excecao){
        if (name->getName() == invalidValue)
            state = fail;
        return;
    }
}
int TUName::run(){
    setUp();
    testSucessScenario();
    testFailScenario();
    tearDown();
    return state;
}

// Definições de métodos da classe TUNumber.
void TUNumber::setUp(){
    number = new Number();
    state = sucess;
}
void TUNumber::tearDown(){
    delete number;
}
void TUNumber::testSucessScenario(){
    try{
        number->setNumber(validValue);
        if (number->getNumber() != validValue)
            state = fail;
    }
    catch(invalid_argument excecao){
        state = fail;
    }
}
void TUNumber::testFailScenario(){
    try{
        number->setNumber(invalidValue);
        state = fail;
    }
    catch(invalid_argument excecao){
        if (number->getNumber() == invalidValue)
            state = fail;
        return;
    }
}
int TUNumber::run(){
    setUp();
    testSucessScenario();
    testFailScenario();
    tearDown();
    return state;
}

// Definições de métodos da classe TUTerm.
void TUTerm::setUp(){
    term = new Term();
    state = sucess;
}
void TUTerm::tearDown(){
    delete term;
}
void TUTerm::testSucessScenario(){
    try{
        term->setTerm(validValue);
        if (term->getTerm() != validValue)
            state = fail;
    }
    catch(invalid_argument excecao){
        state = fail;
    }
}
void TUTerm::testFailScenario(){
    try{
        term->setTerm(invalidValue);
        state = fail;
    }
    catch(invalid_argument excecao){
        if (term->getTerm() == invalidValue)
            state = fail;
        return;
    }
}
int TUTerm::run(){
    setUp();
    testSucessScenario();
    testFailScenario();
    tearDown();
    return state;
}

// Definições de métodos da classe TUPassword.
void TUPassword::setUp(){
    password = new Password();
    state = sucess;
}
void TUPassword::tearDown(){
    delete password;
}
void TUPassword::testSucessScenario(){
    try{
        password->setPassword(validValue);
        if (password->getPassword() != validValue)
            state = fail;
    }
    catch(invalid_argument excecao){
        state = fail;
    }
}
void TUPassword::testFailScenario(){
    try{
        password->setPassword(invalidValue);
        state = fail;
    }
    catch(invalid_argument excecao){
        if (password->getPassword() == invalidValue)
            state = fail;
        return;
    }
}
int TUPassword::run(){
    setUp();
    testSucessScenario();
    testFailScenario();
    tearDown();
    return state;
}

// Definições de métodos da classe TUFee.
void TUFee::setUp(){
    fee = new Fee();
    state = sucess;
}
void TUFee::tearDown(){
    delete fee;
}
void TUFee::testSucessScenario(){
    try{
        fee->setFee(validValue);
        if (fee->getFee() != validValue)
            state = fail;
    }
    catch(invalid_argument excecao){
        state = fail;
    }
}
void TUFee::testFailScenario(){
    try{
        fee->setFee(invalidValue);
        state = fail;
    }
    catch(invalid_argument excecao){
        if (fee->getFee() == invalidValue)
            state = fail;
        return;
    }
}
int TUFee::run(){
    setUp();
    testSucessScenario();
    testFailScenario();
    tearDown();
    return state;
}

// Definições de métodos da classe TUAplicationValue.
void TUAplicationValue::setUp(){
    aplicationValue = new AplicationValue();
    state = sucess;
}
void TUAplicationValue::tearDown(){
    delete aplicationValue;
}
void TUAplicationValue::testSucessScenario(){
    try{
        aplicationValue->setAplicationValue(validValue);
        if (aplicationValue->getAplicationValue() != validValue)
            state = fail;
    }
    catch(invalid_argument excecao){
        state = fail;
    }
}
void TUAplicationValue::testFailScenario(){
    try{
        aplicationValue->setAplicationValue(invalidValue);
        state = fail;
    }
    catch(invalid_argument excecao){
        if (aplicationValue->getAplicationValue() == invalidValue)
            state = fail;
        return;
    }
}
int TUAplicationValue::run(){
    setUp();
    testSucessScenario();
    testFailScenario();
    tearDown();
    return state;
}

// Definições de métodos da classe TUMinimumValue.
void TUMinimumValue::setUp(){
    minimumValue = new MinimumValue();
    state = sucess;
}
void TUMinimumValue::tearDown(){
    delete minimumValue;
}
void TUMinimumValue::testSucessScenario(){
    try{
        minimumValue->setMinimumValue(validValue);
        if (minimumValue->getMinimumValue() != validValue)
            state = fail;
    }
    catch(invalid_argument excecao){
        state = fail;
    }
}
void TUMinimumValue::testFailScenario(){
    try{
        minimumValue->setMinimumValue(invalidValue);
        state = fail;
    }
    catch(invalid_argument excecao){
        if (minimumValue->getMinimumValue() == invalidValue)
            state = fail;
        return;
    }
}
int TUMinimumValue::run(){
    setUp();
    testSucessScenario();
    testFailScenario();
    tearDown();
    return state;
}

