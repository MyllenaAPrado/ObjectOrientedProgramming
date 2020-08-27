#include<regex>
#include "dominios.h"
using namespace std;

// Definições de métodos da classe ZipCode.

void ZipCode::validate(int zipCode) throw (invalid_argument) {
    if(60999999 < zipCode  && zipCode < 1000000)
        throw invalid_argument("Erro parametro.");
}

void ZipCode::setZipCode(int zipCode) throw (invalid_argument) {

    validate(zipCode);

    if((1000000 <= zipCode && zipCode <= 5999999) ||(8000000 <= zipCode && zipCode<= 8499999))
        this->state = "São Paulo";
    else if (20000000 <= zipCode  && zipCode<= 26600999)
        this->state = "Rio de Janeiro";
    else if (70000000 <= zipCode &&  zipCode <= 70999999)
        this->state = "Brasília";
    else if (40000000 <= zipCode  && zipCode <= 41999999)
        this->state = "Salvador";
    else if (60000000 <= zipCode && zipCode<= 60999999)
        this->state = "Fortaleza";

    this->zipCode = zipCode;
}

// Definições de métodos da classe Clazz.
void Clazz::validate(string clazz) throw (invalid_argument){
    if(!regex_match(clazz, regex("(LCA)\(LCI)\(LF)\(LC)")))
        throw invalid_argument("Erro parametro.");
}

void Clazz::setClazz (string clazz) throw (invalid_argument){
    validate(clazz);
    this->clazz = clazz;
}


/**
void AgencyCode::validate(vector<int> code) throw(invalid_argument){
    if(code.size() > 4)
        throw invalid_argument("Erro parametro.");
    for(int i=0; i<= code.size(); i++){
        if(code[i] <0 || code[i] > 9)
            throw invalid_argument("Erro parametro.");
    }

}
**/







