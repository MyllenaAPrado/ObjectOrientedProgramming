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
            state = failure;
    }
    catch(invalid_argument excecao){
        state = failure;
    }
}
void TUZipCode::testFailureScenario(int value){
    try{
        zipCode->setZipCode(value);
        state = failure;
    }
    catch(invalid_argument excecao){
        return;
    }
}
int TUZipCode::run(){
    setUp();
    testSucessScenario();
    testFailureScenario(invalidValue);
    testFailureScenario(invalidValue1);
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
            state = failure;
    }
    catch(invalid_argument excecao){
        state = failure;
    }
}
void TUClazz::testFailureScenario(){
    try{
        clazz->setClazz(invalidValue);
        state = failure;
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
            state = failure;
    }
    catch(invalid_argument excecao){
        state = failure;
    }
}
void TUAgencyCode::testFailureScenario(vector<int>  value){
    try{
        agencyCode->setCode(value);
        state = failure;
    }
    catch(invalid_argument excecao){
        return;
    }
}
int TUAgencyCode::run(){
    setUp();
    testSucessScenario();
    testFailureScenario(invalidValue);
    testFailureScenario(invalidValue1);
    testFailureScenario(invalidValue2);
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
            state = failure;
    }
    catch(invalid_argument excecao){
        state = failure;
    }
}
void TUAplicationCode::testFailureScenario(vector<int> value){
    try{
        aplicationCode->setCode(value);
        state = failure;
    }
    catch(invalid_argument excecao){
        return;
    }
}
int TUAplicationCode::run(){
    setUp();
    testSucessScenario();
    testFailureScenario(invalidValue);
    testFailureScenario(invalidValue1);
    testFailureScenario(invalidValue2);
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
            state = failure;
    }
    catch(invalid_argument excecao){
        state = failure;
    }
}
void TUBankCode::testFailureScenario(int invalidValue){
    try{
        bankCode->setCode(invalidValue);
        state = failure;
    }
    catch(invalid_argument excecao){
        return;
    }
}
int TUBankCode::run(){
    setUp();
    testSucessScenario();
    testFailureScenario(invalidValue);
    testFailureScenario(invalidValue1);
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
            state = failure;
    }
    catch(invalid_argument excecao){
        state = failure;
    }
}
void TUProductCode::testFailureScenario(vector<int> invalidValue){
    try{
        productCode->setCode(invalidValue);
        state = failure;
    }
    catch(invalid_argument excecao){
        return;
    }
}
int TUProductCode::run(){
    setUp();
    testSucessScenario();
    testFailureScenario(invalidValue);
    testFailureScenario(invalidValue1);
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
            state = failure;
    }
    catch(invalid_argument excecao){
        state = failure;
    }
}
void TUCpf::testFailureScenario(string invalidValue){
    try{
        cpf->setCpf(invalidValue);
        state = failure;
    }
    catch(invalid_argument excecao){
        return;
    }
}
int TUCpf::run(){
    setUp();
    testSucessScenario();
    testFailureScenario(invalidValue);
    testFailureScenario(invalidValue1);
    testFailureScenario(invalidValue2);
    testFailureScenario(invalidValue3);
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
            state = failure;
    }
    catch(invalid_argument excecao){
        state = failure;
    }
}
void TUDatee::testFailureScenario(string invalidValue){
    try{
        datee->setDatee(invalidValue);
        state = failure;
    }
    catch(invalid_argument excecao){
        return;
    }
}
int TUDatee::run(){
    setUp();
    testSucessScenario();
    testFailureScenario(invalidValue);
    testFailureScenario(invalidValue1);
    testFailureScenario(invalidValue2);
    testFailureScenario(invalidValue3);
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
            state = failure;
    }
    catch(invalid_argument excecao){
        state = failure;
    }
}
void TUEmitter::testFailureScenario(string invalidValue){
    try{
        emitter->setEmitter(invalidValue);
        state = failure;
    }
    catch(invalid_argument excecao){
        return;
    }
}
int TUEmitter::run(){
    setUp();
    testSucessScenario();
    testFailureScenario(invalidValue);
    testFailureScenario(invalidValue1);
    testFailureScenario(invalidValue2);
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
            state = failure;
    }
    catch(invalid_argument excecao){
        state = failure;
    }
}
void TUAddress::testFailureScenario(string invalidValue){
    try{
        address->setAddress(invalidValue);
        state = failure;
    }
    catch(invalid_argument excecao){
        return;
    }
}
int TUAddress::run(){
    setUp();
    testSucessScenario();
    testFailureScenario(invalidValue);
    testFailureScenario(invalidValue1);
    testFailureScenario(invalidValue2);
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
            state = failure;
    }
    catch(invalid_argument excecao){
        state = failure;
    }
}
void TUTime::testFailureScenario(string invalidValue){
    try{
        time->setTime(invalidValue);
        state = failure;
    }
    catch(invalid_argument excecao){
        return;
    }
}
int TUTime::run(){
    setUp();
    testSucessScenario();
    testFailureScenario(invalidValue);
    testFailureScenario(invalidValue1);
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
            state = failure;
    }
    catch(invalid_argument excecao){
        state = failure;
    }
}
void TUName::testFailureScenario(string invalidValue){
    try{
        name->setName(invalidValue);
        state = failure;
    }
    catch(invalid_argument excecao){
        return;
    }
}
int TUName::run(){
    setUp();
    testSucessScenario();
    testFailureScenario(invalidValue);
    testFailureScenario(invalidValue1);
    testFailureScenario(invalidValue2);
    testFailureScenario(invalidValue3);
    testFailureScenario(invalidValue4);
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
            state = failure;
    }
    catch(invalid_argument excecao){
        state = failure;
    }
}
void TUNumber::testFailureScenario(string invalidValue){
    try{
        number->setNumber(invalidValue);
        state = failure;
    }
    catch(invalid_argument excecao){
        return;
    }
}
int TUNumber::run(){
    setUp();
    testSucessScenario();
    testFailureScenario(invalidValue);
    testFailureScenario(invalidValue1);
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
            state = failure;
    }
    catch(invalid_argument excecao){
        state = failure;
    }
}
void TUTerm::testFailureScenario(){
    try{
        term->setTerm(invalidValue);
        state = failure;
    }
    catch(invalid_argument excecao){
        return;
    }
}
int TUTerm::run(){
    setUp();
    testSucessScenario();
    testFailureScenario();
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
            state = failure;
    }
    catch(invalid_argument excecao){
        state = failure;
    }
}
void TUPassword::testFailureScenario(string invalidValue){
    try{
        password->setPassword(invalidValue);
        state = failure;
    }
    catch(invalid_argument excecao){
        return;
    }
}
int TUPassword::run(){
    setUp();
    testSucessScenario();
    testFailureScenario(invalidValue);
    testFailureScenario(invalidValue1);
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
            state = failure;
    }
    catch(invalid_argument excecao){
        state = failure;
    }
}
void TUFee::testFailureScenario(){
    try{
        fee->setFee(invalidValue);
        state = failure;
    }
    catch(invalid_argument excecao){
        return;
    }
}
int TUFee::run(){
    setUp();
    testSucessScenario();
    testFailureScenario();
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
            state = failure;
    }
    catch(invalid_argument excecao){
        state = failure;
    }
}
void TUAplicationValue::testFailureScenario(){
    try{
        aplicationValue->setAplicationValue(invalidValue);
        state = failure;
    }
    catch(invalid_argument excecao){
        return;
    }
}
int TUAplicationValue::run(){
    setUp();
    testSucessScenario();
    testFailureScenario();
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
            state = failure;
    }
    catch(invalid_argument excecao){
        state = failure;
    }
}
void TUMinimumValue::testFailureScenario(){
    try{
        minimumValue->setMinimumValue(invalidValue);
        state = failure;
    }
    catch(invalid_argument excecao){
        return;
    }
}
int TUMinimumValue::run(){
    setUp();
    testSucessScenario();
    testFailureScenario();
    tearDown();
    return state;
}

