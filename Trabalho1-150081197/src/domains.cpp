#include "domains.h"
#include <regex>
#include <vector>
#include<string>
#include<iostream>
#include <algorithm>


using namespace std;

// Definições de métodos da classe ZipCode.
void ZipCode::validate(int zipCode) throw (invalid_argument) {
    if(zipCode < 1000000 || (5999999<zipCode && zipCode < 8000000)|| (8499999 < zipCode && zipCode < 20000000) ||
       (26600999 <zipCode && zipCode < 40000000) || (41999999< zipCode && zipCode < 60000000) || zipCode >70999999){
        throw invalid_argument("Erro parametro.");
       }
}

void ZipCode::setState(string state) {
    this->state = state;
}

void ZipCode::setZipCode(int zipCode) throw (invalid_argument) {

    validate(zipCode);

    if((1000000 <= zipCode && zipCode <= 5999999) ||(8000000 <= zipCode && zipCode<= 8499999))
        setState("São Paulo");
    else if (20000000 <= zipCode  && zipCode<= 26600999)
        setState("Rio de Janeiro");
    else if (70000000 <= zipCode &&  zipCode <= 70999999)
        setState("Brasília");
    else if (40000000 <= zipCode  && zipCode <= 41999999)
        setState(state = "Salvador");
    else if (60000000 <= zipCode && zipCode<= 60999999)
        setState("Fortaleza");

    this->zipCode = zipCode;
}

// Definições de métodos da classe Clazz
void Clazz::validate(string clazz) throw (invalid_argument){
    if(!regex_match(clazz, regex("(LCA)|(LCI)|(LF)|(LC)")))
        throw invalid_argument("Erro parametro.");
}

void Clazz::setClazz (string clazz) throw (invalid_argument){
    validate(clazz);
    this->clazz = clazz;
}

// Definições de métodos da classe AgencyCode
void AgencyCode::validate(vector<int> code) throw(invalid_argument){
    if(code.size() != 4)
        throw invalid_argument("Erro parametro.");
    if(code[0] == 0 && code[1] == 0 && code[2] == 0 && code[3] == 0)
        throw invalid_argument("Erro parametro.");
    for(int i=0; i < code.size(); i++){
        if(code[i] <0 || code[i] > 9)
            throw invalid_argument("Erro parametro.");
    }
}

void AgencyCode::setCode(vector<int> code) throw(invalid_argument){
    validate(code);
    this->code = code;
}

// Definições de métodos da classe AplicationCode
void AplicationCode::validate(vector<int> code) throw(invalid_argument){
    if(code.size() != 5)
        throw invalid_argument("Erro parametro.");
    if(code[0] == 0 && code[1] == 0 && code[2] == 0 && code[3] == 0 && code[4]== 0 )
        throw invalid_argument("Erro parametro.");
    for(int i=0; i < code.size(); i++){
        if(code[i] <0 || code[i] > 9)
            throw invalid_argument("Erro parametro.");
    }
}

void AplicationCode::setCode(vector<int> code) throw(invalid_argument){
    validate(code);
    this->code = code;
}

// Definições de métodos da classe BankCode
void BankCode::validate(int code) throw(invalid_argument){
    if(code != 001 && code != 237 && code != 104 && code != 314 && code != 033)
        throw invalid_argument("Erro parametro.");
}
// 001 BB - 237 Bradesco - 104 Caixa - 314 itau - 033 santander

void BankCode::setCode(int code) throw(invalid_argument){
    validate(code);
    this->code = code;
}

// Definições de métodos da classe ProductCode
void ProductCode::validate(vector<int> code) throw(invalid_argument){
    if(code.size() != 3)
        throw invalid_argument("Erro parametro.");
    if(code[0] == 0 && code[1] == 0 && code[2] == 0)
        throw invalid_argument("Erro parametro.");
    for(int number : code){
        if(number < 0 || number > 9)
            throw invalid_argument("Erro parametro.");
    }
}

void ProductCode::setCode(vector<int> code) throw(invalid_argument){
    validate(code);
    this->code = code;
}

// Definições de métodos da classe Cpf
void Cpf::validate(string cpf) throw (invalid_argument){
    vector<int> numbers;

    cpf.erase(remove(cpf.begin(), cpf.end(), '.'), cpf.end());
    cpf.erase(remove(cpf.begin(), cpf.end(), '-'), cpf.end());
    if(!regex_match(cpf, regex(R"((?:^|\s)([+-]?[[:digit:]]+(?:\.[[:digit:]]+)?)(?=$|\s))")))
        throw invalid_argument("Erro parametro.");
    for(int i = 0 ; i< cpf.size(); i++){
        numbers.push_back(atoi(cpf.substr(i,1).c_str()));
    }
    if(numbers.size() != 11){
        cout << "size";
        throw invalid_argument("Erro parametro.");
    }

    //verificar primeiro digito

    //verificar segundo digito
/**
    if(cpf == "testeeee")
        throw invalid_argument("Erro parametro.");
        **/
}

void Cpf::setCpf (string cpf) throw (invalid_argument){
    validate(cpf);
    this->cpf = cpf;
}

// Definições de métodos da classe Date     ARRUMAR DATE
void Datee::validate(string datee) throw(invalid_argument){
    int day, month, year;
    day = stoi(datee.substr(0,2));
    month = stoi(datee.substr(3,2));
    year = stoi(datee.substr(6,4));
    if( day < 1 || day > 31)
        throw invalid_argument("Erro parametro.");
    if(month <1 || month > 12 )
        throw invalid_argument("Erro parametro.");
    if(year<2020 || year > 2099)
        throw invalid_argument("Erro parametro.");
}

void Datee::setDatee(string date) throw(invalid_argument){
    validate(datee);
    this->datee = datee;
}


// Definições de métodos da classe Clazz
void Emitter::validate(string emitter) throw (invalid_argument){
    if(regex_match(emitter, regex("(--)|(' '[a-z_0-9])"))) //arrumar a regex
        throw invalid_argument("Erro parametro.");
}

void Emitter::setEmitter(string emitter) throw (invalid_argument){
    validate(emitter);
    this->emitter = emitter;
}


// Definições de métodos da classe Address
void Address::validate(string address) throw (invalid_argument){
    if(address == "testee") //arrumar a regex
        throw invalid_argument("Erro parametro.");
}

void Address::setAddress(string address) throw (invalid_argument){
    validate(address);
    this->address = address;
}

// Definições de métodos da classe Time
void Time::validate(string time) throw (invalid_argument){
    if(time == "testee") //arrumar a regex
        throw invalid_argument("Erro parametro.");
}

void Time::setTime(string time) throw (invalid_argument){
    validate(time);
    this->time = time;
}

// Definições de métodos da classe Name
void Name::validate(string name) throw (invalid_argument){
    if(name == "testee") //arrumar a regex
        throw invalid_argument("Erro parametro.");
}

void Name::setName(string name) throw (invalid_argument){
    validate(name);
    this->name = name;
}

// Definições de métodos da classe Name
void Number::validate(string number) throw (invalid_argument){
    if(number == "testee") //arrumar a regex
        throw invalid_argument("Erro parametro.");
}

void Number::setNumber(string number) throw (invalid_argument){
    validate(number);
    this->number = number;
}

// Definições de métodos da classe Name
void Term::validate(int term) throw (invalid_argument){
    if(term!= 6 && term != 12 && term != 18 && term != 24 && term != 30 && term != 36
       && term != 42 && term != 48 && term != 54 && term != 60 && term != 66 && term != 72) //arrumar a regex
        throw invalid_argument("Erro parametro.");
}

void Term::setTerm(int term) throw (invalid_argument){
    validate(term);
    this->term = term;
}

// Definições de métodos da classe Password
void Password::validate(int password) throw (invalid_argument){
    if(password > 999999) //arrumar a regex
        throw invalid_argument("Erro parametro.");

}

void Password::setPassword(int password) throw (invalid_argument){
    validate(password);
    this->password = password;
}

// Definições de métodos da classe Fee
void Fee::validate(int fee) throw (invalid_argument){
    if(fee < 0 || fee > 200)
        throw invalid_argument("Erro parametro.");
}

void Fee::setFee(int fee) throw (invalid_argument){
    validate(fee);
    this->fee = fee;
}

// Definições de métodos da classe AplicationValue
void AplicationValue::validate(double aplicationValue) throw (invalid_argument){
    if(aplicationValue < 0 || aplicationValue > 1000000)
        throw invalid_argument("Erro parametro.");
}

void AplicationValue::setAplicationValue(double aplicationValue) throw (invalid_argument){
    validate(aplicationValue);
    this->aplicationValue = aplicationValue;
}

// Definições de métodos da classe AplicationValue
void MinimumValue::validate(double minimumValue) throw (invalid_argument){
    if(minimumValue != 1000.00 && minimumValue != 5000.00 && minimumValue != 10000.00  && minimumValue != 50000.00)
        throw invalid_argument("Erro parametro.");
}

void MinimumValue::setMinimumValue(double minimumValue) throw (invalid_argument){
    validate(minimumValue);
    this->minimumValue = minimumValue;
}
