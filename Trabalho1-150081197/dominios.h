#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

// Declaração da classe ZipCode.
class ZipCode{
private:
    int zipCode;
    string state;
    void validate(int) throw (invalid_argument);

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

/**
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
**/




#endif // DOMINIOS_H_INCLUDED
