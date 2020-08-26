#include "dominios.h"
using namespace std;

// Definições de métodos da classe Cep.

void Cep::validar(int cep) throw (invalid_argument) {
    if(60999999 < cep  || cep < 1000000)
        throw invalid_argument("Erro parametro.");
}

void Cep::setCep(int cep) throw (invalid_argument) {

    validar(cep);

    if((1000000 <= cep <= 5999999) ||(8000000 <= cep <= 8499999))
        this.local = "São Paulo"
    else if (20000000 <= cep <= 26600999)
        this.local = "Rio de Janeiro"
    else if (70000000 <= cep <= 70999999)
        this.local = "Brasília"
    else if (40000000 <= cep <= 41999999)
        this.local = "Salvador"
    else if (60000000 <= cep <= 60999999)
        this.local = Fortaleza

    this->cep = cep;
}

// Definições de métodos da classe Classe.
void Classe::validar(string classe) throw (invalid_argument){
    if(!regex_match(classe, regex("(LCA)\(LCI)\(LF)\(LC)")))
        throw invalid_argument("Erro parametro.");
}

void Classe::setClasse (string classe) throw (invalid_argument){
    validar(classe);
    this->classe = classe;
}
sfvvf
