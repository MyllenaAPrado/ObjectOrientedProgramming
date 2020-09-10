#ifndef DOMAINS_H
#define DOMAINS_H
#include <iostream>
#include <string>
#include<vector>
using namespace std;

/** Classe ZipCode representa o CEP do usuario.**/
class ZipCode{
private:
    int zipCode;
    string state;
    void validate(int) throw (invalid_argument);
    void setState(string);

public:
    void setZipCode(int) throw (invalid_argument);
    int getZipCode() const {
        return zipCode;
    }
    string getState() const {
        return state;
    }

};

/** Classe Clazz representa a classe dos produtos de investimento e pode ser: CDB, LCA, LCI, LF ou LC..**/
class Clazz{
private:
    string clazz;
    void validate(string) throw (invalid_argument);

public:
    string getClazz() const{
        return clazz;
    }
    void setClazz(string) throw (invalid_argument);
};

/** Classe AgencyCode representa a agencia da conta do usuario.
O codigo so contém numero e nao e 0000**/
class AgencyCode{
private:
    vector<int> code;
    void validate(vector<int>) throw (invalid_argument);
public:
    vector<int> getCode() const{
        return code;
    }
    void setCode(vector<int>) throw (invalid_argument);

};

/** Classe AplicationCode representa o codigo da aplicacao
O codigo so contem numero e nao e 00000**/
class AplicationCode{
private:
    vector<int> code;
    void validate(vector<int>) throw (invalid_argument);
public:
    vector<int> getCode() const{
        return code;
    }
    void setCode(vector<int>) throw (invalid_argument);

};

/** Classe BankCode representa o codigo do banco do usuario.
O codigo do banco corresponde a algum dos principais bancos do Brasil.
Sendo eles: BB(001), Bradesco(237), Caixa(104), Itaú(314) e Santander(033)**/
class BankCode{
private:
    int code;
    void validate(int) throw (invalid_argument);
public:
    int getCode() const{
        return code;
    }
    void setCode(int) throw (invalid_argument);

};

/** Classe ProductCode representa o codigo de um produto que pode ser investido
O codigo do produto so contem numero e nao e 000**/
class ProductCode{
private:
    vector<int> code;
    void validate(vector<int>) throw (invalid_argument);
public:
    vector<int> getCode() const{
        return code;
    }
    void setCode(vector<int>) throw (invalid_argument);

};

/** Classe CPF representa o CPF do usuario.
a classe utiliza calculo de verificacao dos dois ultimos digitos do CPF
para validaçã**/
class Cpf{
private:
    string cpf;
    void validate(string) throw (invalid_argument);
public:
    string getCpf() const{
        return cpf;
    }
    void setCpf(string) throw (invalid_argument);

};

/** Classe Datee representa um data com dia, mes e ano que esta entre 2020 e 2099**/
class Datee{
private:
    string datee;
    int month;
    int day;
    int year;
    void validate(string) throw (invalid_argument);
public:
    string getDatee() const{
        return datee;
    }
    int getMonth() const{
        return month;
    }
    int getDay() const{
        return day;
    }
    int getYear() const{
        return year;
    }
    void setDatee(string) throw (invalid_argument);

};

/** Classe Emitter representa o emissor de um produto de investimento**/
class Emitter{
private:
    string emitter;
    void validate(string) throw (invalid_argument);
public:
    string getEmitter() const{
        return emitter;
    }
    void setEmitter(string) throw (invalid_argument);

};

/** ClasseAddress representa um endereco de um usuario**/
class Address{
private:
    string address;
    void validate(string) throw (invalid_argument);
public:
    string getAddress() const{
        return address;
    }
    void setAddress(string) throw (invalid_argument);

};

/** Classe Time repesenta um horario entre 13:00 e 17:00**/
class Time{
private:
    int hour;
    int minutes;
    string time;
    void validate(string) throw (invalid_argument);
public:
    string getTime() const{
        return time;
    }
    int getHour() const{
        return hour;
    }
    int getMinutes() const{
        return minutes;
    }
    void setTime(string) throw (invalid_argument);
};

/** Classe Name representa o nome de uma pessoa**/
class Name{
private:
    string name;
    void validate(string) throw (invalid_argument);
public:
    string getName() const{
        return name;
    }
    void setName(string) throw (invalid_argument);
};

/** Classe Number representa o numero de uma conta bancaria no formato xxxxxx-x**/
class Number{
private:
    string number;
    void validate(string) throw (invalid_argument);
public:
    string getNumber() const{
        return number;
    }
    void setNumber(string) throw (invalid_argument);

};

/** Classe Term representa um prazo em meses e pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 66 ou 72**/
class Term{
private:
    int term;
    void validate(int) throw (invalid_argument);
public:
    int getTerm() const{
        return term;
    }
    void setTerm(int) throw (invalid_argument);
};

/** Classe Password representa uma senha do sistema que contém apenas numeros**/
class Password{
private:
    string password;
    void validate(string) throw (invalid_argument);
public:
    string getPassword() const{
        return password;
    }
    void setPassword(string) throw (invalid_argument);
};

/** Classe Fee representa a taxa de remuneração de um produto investido em porcentagem e pode ser de 0 a 200**/
class Fee{
private:
    int fee;
    void validate(int) throw (invalid_argument);
public:
    int getFee() const{
        return fee;
    }
    void setFee(int) throw (invalid_argument);
};

/** Classe AplicationValue representa o valor, em reais, de aplicacao e pode ser de 0 a 1.000.000,00 **/
class AplicationValue{
private:
    double aplicationValue;
    void validate(double) throw (invalid_argument);
public:
    double getAplicationValue() const{
        return aplicationValue;
    }
    void setAplicationValue(double) throw (invalid_argument);
};

/** Classe MinimumValue representa o valor minimo de investimento, em reais,
em um produto e pode ser: 1.000,00, 5.000,00, 10.000 ou 50.000,00**/
class MinimumValue{
private:
    double minimumValue;
    void validate(double) throw (invalid_argument);
public:
    double getMinimumValue() const{
        return minimumValue;
    }
    void setMinimumValue(double) throw (invalid_argument);
};

#endif // DOMAINS_H
