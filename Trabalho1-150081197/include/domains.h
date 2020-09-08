#ifndef DOMAINS_H
#define DOMAINS_H
#include <iostream>
#include <string>
#include<vector>
using namespace std;

/** Declara��o da classe ZipCode que representa o CEP do us�ario.**/
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

/** Declara��o da classe Clazz que representa a classe dos produtos de investimento e pode ser: CDB, LCA, LCI, LF ou LC..**/
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

/**Declara��o da classe AgencyCode que representa a ag�ncia da conta do usu�rio**/
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

/** Declara��o da classe AplicationCode que representa o c�digo da aplica��o**/
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

/** Declara��o da classe BankCode que representa o c�digo do banco do usu�rio**/
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

/** Declara��o da classe ProductCode que representa o c�digo de um produto que pode ser investido**/
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

/** Declara��o da classe CPF que representa o CPF do usu�rio**/
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

/** Declara��o da classe Datee representa um data com dia, m�s e ano**/
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

/** Declara��o da classe Emitter que representar o emissor de um produto de investimento**/
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

/** Declara��o da classeAddress que representa um endere�o de um usu�rio**/
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

/** Declara��o da classe Time que repesenta um hor�rio entre 13:00 e 17:00**/
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

/** Declara��o da classe Name que representa um nome de uma pessoa**/
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

/** Declara��o da classe Number que representa o n�mero de uma conta banc�ria**/
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

/** Declara��o da classe Term que representa um prazo em meses e pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 66 ou 72**/
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

/** Declara��o da classe Password que representa uma senha do sistema**/
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

/** Declara��o da classe Fee que representa a taxa de remunera��o de um produto investido em porcentagem e pode ser de 0 a 200**/
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

/** Declara��o da classe AplicationValue que representa o valor de aplica��o e pode ser de 0 a 1.000.000,00 reais**/
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

/** Declara��o da classe MinimumValue que representa o valor m�nimo de investimento
em um produto e pode ser: 1.000,00, 5.000,00, 10.000 ou 50.000,00 reais**/
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
