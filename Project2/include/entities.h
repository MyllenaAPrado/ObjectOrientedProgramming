#ifndef ENTITIES_H
#define ENTITIES_H
#include "domains.h"

/// Representa a aplica&ccedil;&atilde;o em um produto de investimento. Essa aplica&ccedil;&atilde;o possui
/// um c&oacute;digo que identifica o produto que est&aacute; sendo investido, o valor investido no produto
/// e a data da aplica&ccedil;&atilde;o.
class Aplication{
private:
    AplicationCode code;
    AplicationValue value;
    Datee datee;

public:

    void setCode(const AplicationCode &code){
        this->code = code;
    }
    AplicationCode getCode() const {
        return code;
    }

    void setValue(const AplicationValue &value){
        this->value = value;
    }
    AplicationValue getValue() const{
        return value;
    }

    void setDatee(const Datee &datee){
        this->datee = datee;
    }
    Datee getDatee()const{
        return datee;
    }

};

/// Representa a conta corrente de um usu&aacute;rio. A conta possui o c&oacute;digo do banco que ela pertence,
/// a ag&ecirc;ncia dessa conta e o seu n&uacute;mero.
class Count{
private:
    BankCode bank;
    AgencyCode agency;
    Number number;

public:

    void setBankCode(const BankCode &bank){
        this->bank = bank;
    }
    BankCode getBankCode() const{
        return bank;
    }

    void setAgencyCode(const AgencyCode &agency){
        this->agency = agency;
    }
    AgencyCode getAgencyCode()const{
        return agency;
    }

    void setNumber(const Number &number){
        this->number = number;
    }
    Number getNumber() const{
        return number;
    }
};

/// Representa o produto que pode ser investido pelos usu&aacute;rios do sistema.
/// O produto possui um c&oacute;digo que o identifica, uma classe, o emissor que emite esse produto,
/// o prazo que a aplica&ccedil;&atilde;o tem em meses, a data em que a renda estar&aacute; dispon&iacute;vel, a
/// taxa de rendimento do produto, e o valor m&iacute;nimo que deve ser aplicado.
class Product{
private:
    ProductCode code;
    Clazz clazz;
    Emitter emitter;
    Term term;
    Datee dueDate;
    Fee fee;
    Time time;
    MinimumValue value;

public:
    void setProductCode(const ProductCode &code){
        this->code = code;
    }
    ProductCode getProductCode() const{
        return code;
    }

    void setClazz (const Clazz &clazz){
        this->clazz = clazz;
    }
    Clazz getClazz() const{
        return clazz;
    }

    void setEmitter(const Emitter &emitter){
        this->emitter = emitter;
    }
    Emitter getEmitter() const{
        return emitter;
    }

    void setTerm (const Term &term){
        this->term = term;
    }
    Term getTerm() const{
        return term;
    }

    void setDueDate(const Datee &dueDate){
        this->dueDate = dueDate;
    }
    Datee getDueDate() const{
        return dueDate;
    }

    void setFee(const Fee &fee){
        this->fee = fee;
    }
    Fee getFee()const{
        return fee;
    }

    void setTime(const Time &time){
        this->time = time;
    }
    Time getTime() const{
        return time;
    }

    void setMinimumValue(const MinimumValue &value){
        this->value = value;
    }
    MinimumValue getMinimumValue() const{
        return value;
    }

};

/// Representa o usu&aacute;rio do sistema. Esse usu&aacute;rio que realiza a aplica&ccedil;&atilde;o em um produto
/// O usu&aacute;rio possui um nome e uma senha para ser identificado no sistema, al&eacute;m de informa&ccedil;&otilde;es pessoais
/// como o seu endere&ccedil;o, seu CEP e seu CPF.
class User{
private:
    Name name;
    Address address;
    ZipCode zipCode;
    Cpf cpf;
    Password password;

public:
    void setName(const Name &name){
        this->name = name;
    }
    Name getName() const{
        return name;
    }

    void setAddress(const Address &address){
        this->address = address;
    }
    Address getAddress() const{
        return address;
    }

    void setZipCode(const ZipCode &zipCode){
        this->zipCode = zipCode;
    }
    ZipCode getZipCode() const{
        return zipCode;
    }

    void setCpf( const Cpf &cpf){
        this->cpf = cpf;
    }
    Cpf getCpf() const{
        return cpf;
    }

    void setPassword(const Password &password){
        this->password = password;
    }
    Password getPassword() const{
        return password;
    }

};


#endif // ENTITIES_H
