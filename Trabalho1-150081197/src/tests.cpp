#include "tests.h"
//Definições de constantes.

const int TUZipCode::sucess;
const int TUZipCode::failure;
const int TUZipCode::validValue = 70000000;
const int TUZipCode::invalidValue = 30;

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

void TUZipCode::testFailureScenario(){
    try{
        zipCode->setZipCode(invalidValue);
        state = failure;
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

const int TUClazz::sucess;
const int TUClazz::failure;
const string TUClazz::validValue = "LCI";
const string TUClazz::invalidValue = "ABC";

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

//Definições de constantes.

const int TUAgencyCode::sucess;
const int TUAgencyCode::failure;
const vector<int> TUAgencyCode::validValue{0,2,5,9};
const vector<int> TUAgencyCode::invalidValue{0,0,0,0};

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

void TUAgencyCode::testFailureScenario(){
    try{
        agencyCode->setCode(invalidValue);
        state = failure;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUAgencyCode::run(){
    setUp();
    testSucessScenario();
    testFailureScenario();
    tearDown();
    return state;
}


//Definições de constantes.

const int TUAplicationCode::sucess;
const int TUAplicationCode::failure;
const vector<int> TUAplicationCode::validValue{0,2,5,9,1};
const vector<int> TUAplicationCode::invalidValue{0,0,0,0,0};

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

void TUAplicationCode::testFailureScenario(){
    try{
        aplicationCode->setCode(invalidValue);
        state = failure;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUAplicationCode::run(){
    setUp();
    testSucessScenario();
    testFailureScenario();
    tearDown();
    return state;
}

//Definições de constantes.

const int TUBankCode::sucess;
const int TUBankCode::failure;
const int TUBankCode::validValue = 033;
const int TUBankCode::invalidValue = 897;

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

void TUBankCode::testFailureScenario(){
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
    testFailureScenario();
    tearDown();
    return state;
}

//Definições de constantes.

const int TUProductCode::sucess;
const int TUProductCode::failure;
const vector<int> TUProductCode::validValue{0,2,5};
const vector<int> TUProductCode::invalidValue{0,0,0};

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

void TUProductCode::testFailureScenario(){
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
    testFailureScenario();
    tearDown();
    return state;
}

//IMPLEEMNTAR CALSSE CPF

//Definições de constantes.

const int TUCpf::sucess;
const int TUCpf::failure;
const string TUCpf::validValue = "045.633.831-47";
const string TUCpf::invalidValue = "045.633.831-07";

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

void TUCpf::testFailureScenario(){
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
    testFailureScenario();
    tearDown();
    return state;
}



//Definições de constantes.

const int TUDatee::sucess;
const int TUDatee::failure;
const string TUDatee::validValue = "02/02/2020";
const string TUDatee::invalidValue = "03/04/2019";

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

void TUDatee::testFailureScenario(){
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
    testFailureScenario();
    tearDown();
    return state;
}

//Definições de constantes.

const int TUEmitter::sucess;
const int TUEmitter::failure;
const string TUEmitter::validValue = "Joa4578od 7Jul8io Lua.n-k";
const string TUEmitter::invalidValue = "tt-.7oe.r Add895.Agr";

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

void TUEmitter::testFailureScenario(){
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
    testFailureScenario();
    tearDown();
    return state;
}

//Definições de constantes.

const int TUAddress::sucess;
const int TUAddress::failure;
const string TUAddress::validValue = "Av.Arlindo Bloco0";
const string TUAddress::invalidValue = "Av. a?rlindo Bloco";

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

void TUAddress::testFailureScenario(){
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
    testFailureScenario();
    tearDown();
    return state;
}

//Definições de constantes.

const int TUTime::sucess;
const int TUTime::failure;
const string TUTime::validValue = "hora1";
const string TUTime::invalidValue = "hora2";

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

void TUTime::testFailureScenario(){
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
    testFailureScenario();
    tearDown();
    return state;
}

//Definições de constantes.

const int TUName::sucess;
const int TUName::failure;
const string TUName::validValue = "Nametr";
const string TUName::invalidValue = "A B V";

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

void TUName::testFailureScenario(){
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
    testFailureScenario();
    tearDown();
    return state;
}

//Definições de constantes.

const int TUNumber::sucess;
const int TUNumber::failure;
const string TUNumber::validValue = "123456-8";
const string TUNumber::invalidValue = "12345097";

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

void TUNumber::testFailureScenario(){
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
    testFailureScenario();
    tearDown();
    return state;
}

//Definições de constantes.

const int TUTerm::sucess;
const int TUTerm::failure;
const int TUTerm::validValue = 60;
const int TUTerm::invalidValue = 22;

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

//Definições de constantes.

const int TUPassword::sucess;
const int TUPassword::failure;
const string TUPassword::validValue = "123456";
const string TUPassword::invalidValue = "15234";

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

void TUPassword::testFailureScenario(){
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
    testFailureScenario();
    tearDown();
    return state;
}

//Definições de constantes.

const int TUFee::sucess;
const int TUFee::failure;
const int TUFee::validValue = 150;
const int TUFee::invalidValue = 300;

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

//Definições de constantes.

const int TUAplicationValue::sucess;
const int TUAplicationValue::failure;
const double TUAplicationValue::validValue = 9000.00;
const double TUAplicationValue::invalidValue = -23.00;

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


//Definições de constantes.

const int TUMinimumValue::sucess;
const int TUMinimumValue::failure;
const double TUMinimumValue::validValue = 1000.00;
const double TUMinimumValue::invalidValue = 2500.00;

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

