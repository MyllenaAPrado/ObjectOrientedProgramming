#include "entitiesTests.h"

// Definições de métodos da classe TUAplication.
void TUAplication::setUp(){
    aplication = new Aplication();
    state = sucess;
}
void TUAplication::tearDown(){
    delete aplication;
}
void TUAplication::testSucessScenarioCode(){
    AplicationCode code;
    code.setCode(CODE);
    aplication->setCode(code);
    if (aplication->getCode().getCode() != code.getCode())
        state = fail;
}
void TUAplication::testSucessScenarioValue(){
    AplicationValue value;
    value.setAplicationValue(VALUE);
    aplication->setValue(value);
    if (aplication->getValue().getAplicationValue() != value.getAplicationValue())
        state = fail;
}
void TUAplication::testSucessScenarioDatee(){
    Datee datee;
    datee.setDatee(DATEE);
    aplication->setDatee(datee);
    if (aplication->getDatee().getDatee() != datee.getDatee())
        state = fail;
}
int TUAplication::run(){
    setUp();
    testSucessScenarioCode();
    testSucessScenarioValue();
    testSucessScenarioDatee();
    tearDown();
    return state;
}


// Definições de métodos da classe TUCount.
void TUCount::setUp(){
    countt = new Count();
    state = sucess;
}
void TUCount::tearDown(){
    delete countt;
}
void TUCount::testSucessScenarioBank(){
    BankCode bank;
    bank.setCode(BANK);
    countt->setBankCode(bank);
    if (countt->getBankCode().getCode() != bank.getCode())
        state = fail;
}
void TUCount::testSucessScenarioAgency(){
    AgencyCode agency;
    agency.setCode(AGENCY);
    countt->setAgencyCode(agency);
    if (countt->getAgencyCode().getCode() != agency.getCode())
        state = fail;
}
void TUCount::testSucessScenarioNumber(){
    Number number;
    number.setNumber(NUMBER);
    countt->setNumber(number);
    if (countt->getNumber().getNumber() != number.getNumber())
        state = fail;
}
int TUCount::run(){
    setUp();
    testSucessScenarioBank();
    testSucessScenarioAgency();
    testSucessScenarioNumber();
    tearDown();
    return state;
}



// Definições de métodos da classe TUProduct.
void TUProduct::setUp(){
    product = new Product();
    state = sucess;
}
void TUProduct::tearDown(){
    delete product;
}
void TUProduct::testSucessScenarioCode(){
    ProductCode code;
    code.setCode(CODE);
    product->setProductCode(code);
    if (product->getProductCode().getCode() != code.getCode())
        state = fail;
}
void TUProduct::testSucessScenarioClazz(){
    Clazz clazz;
    clazz.setClazz(CLAZZ);
    product->setClazz(clazz);
    if (product->getClazz().getClazz() != clazz.getClazz())
        state = fail;
}
void TUProduct::testSucessScenarioEmitter(){
    Emitter emitter;
    emitter.setEmitter(EMITTER);
    product->setEmitter(emitter);
    if (product->getEmitter().getEmitter() != emitter.getEmitter())
        state = fail;
}
void TUProduct::testSucessScenarioTerm(){
    Term term;
    term.setTerm(TERM);
    product->setTerm(term);
    if (product->getTerm().getTerm() != term.getTerm())
        state = fail;
}
void TUProduct::testSucessScenarioDueDatee(){
    Datee dueDatee;
    dueDatee.setDatee(DUEDATEE);
    product->setDueDate(dueDatee);
    if (product->getDueDate().getDatee() != dueDatee.getDatee())
        state = fail;
}
void TUProduct::testSucessScenarioFee(){
    Fee fee;
    fee.setFee(FEE);
    product->setFee(fee);
    if (product->getFee().getFee() != fee.getFee())
        state = fail;
}
void TUProduct::testSucessScenarioTime(){
    Time time;
    time.setTime(TIME);
    product->setTime(time);
    if (product->getTime().getTime() != time.getTime())
        state = fail;
}
void TUProduct::testSucessScenarioValue(){
    MinimumValue value;
    value.setMinimumValue(VALUE);
    product->setMinimumValue(value);
    if (product->getMinimumValue().getMinimumValue() != value.getMinimumValue())
        state = fail;
}
int TUProduct::run(){
    setUp();
    testSucessScenarioCode();
    testSucessScenarioClazz();
    testSucessScenarioEmitter();
    testSucessScenarioTerm();
    testSucessScenarioDueDatee();
    testSucessScenarioFee();
    testSucessScenarioTime();
    testSucessScenarioValue();
    tearDown();
    return state;
}


// Definições de métodos da classe TUUser.
void TUUser::setUp(){
    user = new User();
    state = sucess;
}
void TUUser::tearDown(){
    delete user;
}
void TUUser::testSucessScenarioName(){
    Name name;
    name.setName(NAME);
    user->setName(name);
    if (user->getName().getName() != name.getName())
        state = fail;
}
void TUUser::testSucessScenarioAddress(){
    Address address;
    address.setAddress(ADDRESS);
    user->setAddress(address);
    if (user->getAddress().getAddress() != address.getAddress())
        state = fail;
}
void TUUser::testSucessScenarioZipCode(){
    ZipCode zipCode;
    zipCode.setZipCode(ZIPCODE);
    user->setZipCode(zipCode);
    if (user->getZipCode().getZipCode() != zipCode.getZipCode())
        state = fail;
}
void TUUser::testSucessScenarioCpf(){
    Cpf cpf;
    cpf.setCpf(CPF);
    user->setCpf(cpf);
    if (user->getCpf().getCpf() != cpf.getCpf())
        state = fail;
}
void TUUser::testSucessScenarioPassword(){
    Password password;
    password.setPassword(PASSWORD);
    user->setPassword(password);
    if (user->getPassword().getPassword() != password.getPassword())
        state = fail;
}
int TUUser::run(){
    setUp();
    testSucessScenarioName();
    testSucessScenarioAddress();
    testSucessScenarioZipCode();
    testSucessScenarioCpf();
    testSucessScenarioPassword();
    tearDown();
    return state;
}
