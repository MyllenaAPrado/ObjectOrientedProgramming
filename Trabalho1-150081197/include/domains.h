#ifndef DOMAINS_H
#define DOMAINS_H
#include <iostream>
#include <string>
#include<vector>
using namespace std;

// Declaração da classe ZipCode.
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

// Declaração da classe Clazz.
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

// Declaração da classe AgencyCode
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

//IMPLEEMNTAR CALSSE CPF
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
