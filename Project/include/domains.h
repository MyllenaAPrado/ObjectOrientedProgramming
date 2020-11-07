#ifndef DOMAINS_H
#define DOMAINS_H
#include <iostream>
#include <string>
#include<vector>
using namespace std;

/// Classe ZipCode representa o CEP do usu&aacute;rio.
/// O CEP pode ser: 1000000 a 5999999 e 8000000 a 8499999 (S&atilde;o Paulo), 20000000
/// a 26600999 (Rio de Janeiro), 70000000 a 70999999 (Bras&iacute;lia), 40000000 a 41999999
/// (Salvador) e 60000000 a 60999999 (Fortaleza).
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

/// Classe Clazz representa a classe dos produtos de investimento e pode ser: CDB, LCA, LCI, LF ou LC.
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

/// Classe AgencyCode representa a ag&ecirc;ncia da conta do usu&aacute;rio.
///O c&oacute;digo s&oacute; cont&eacute;m n&uacute;mero e n&atilde;o pode ser 0000
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

/// Classe AplicationCode representa o c&oacute;digo da aplica&ccedil;&atilde;o
///O c&oacute;digo s&oacute; cont&eacute;m n&uacute;mero e n&atilde;o pode ser 00000
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

/// Classe BankCode representa o c&ocute;digo do banco do usu&aacute;rio.
///O c&ocute;digo do banco corresponde a algum dos principais bancos do Brasil.
///Sendo eles: BB(001), Bradesco(237), Caixa(104), Itaú(341) e Santander(033)
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

/// Classe ProductCode representa o c&oacute;digo de um produto que pode ser investido
///O c&oacute;digo s&oacute; cont&eacute;m n&uacute;mero e n&atilde;o pode ser 000
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

/// Classe CPF representa o CPF do usu&aacute;rio.
///a classe utiliza c&aacute;lculo de verifica&ccedil;&atilde;o dos dois &uacute;ltimos d&iacute;gitos do CPF
///para valida&ccedil;&atilde;o
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

/// Classe Datee representa um data com dia, m&ecirc;s e ano que est&aacute; entre 2020 e 2099
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

/// Classe Emitter representa o emissor de um produto de investimento e pode ter de 5 a 30 caracteres
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

/// ClasseAddress representa um endere&ccedil;o de um usu&aacute;rio. e pode ter de 5 a 20 caracteres
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

/// Classe Time repesenta um hor&aacute;rio entre 13:00 e 17:00
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

/// Classe Name representa o nome de uma pessoa e pode ter de 5 a 30 caracteres
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

/// Classe Number representa o n&uacute;mero de uma conta banc&aacute;ria no formato xxxxxx-x
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

/// Classe Term representa um prazo em meses e pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 66 ou 72
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

/// Classe Password representa uma senha do sistema que cont&eacute;m 6 n&uacute;meros
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

/// Classe Fee representa a taxa de remunera&ccedil;&atilde;o de um produto investido em porcentagem e pode ser de 0 a 200
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

/// Classe AplicationValue representa o valor, em reais, de aplica&ccedil;&atilde;o e pode ser de 0 a 1.000.000,00
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

/// Classe MinimumValue representa o valor m&iacute;nimo de investimento, em reais,
///em um produto e pode ser: 1.000,00, 5.000,00, 10.000 ou 50.000,00
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
