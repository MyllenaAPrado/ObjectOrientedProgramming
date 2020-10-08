#include <iostream>
#include "domains.h"
#include "tests.h"

using namespace std;
int main()
{
    cout << "                             Entities \n\n";

    TUAplication aplication;
    cout << "Aplication: ";
    switch(aplication.run()){
        case TUAplication::sucess: cout << "SUCESS\n";
                                break;
        case TUAplication::fail: cout << "Fail\n";
                                break;
    }

    TUCount countt;
    cout << "Count: ";
    switch(countt.run()){
        case TUCount::sucess: cout << "SUCESS\n";
                                break;
        case TUCount::fail: cout << "Fail\n";
                                break;
    }

    TUProduct product;
    cout << "Product: ";
    switch(product.run()){
        case TUProduct::sucess: cout << "SUCESS\n";
                                break;
        case TUProduct::fail: cout << "Fail\n";
                                break;
    }

    TUUser user;
    cout << "User: ";
    switch(user.run()){
        case TUUser::sucess: cout << "SUCESS\n";
                                break;
        case TUUser::fail: cout << "Fail\n";
                                break;
    }



    cout << "\n                             Domains \n\n";
    TUZipCode zipCode;
    cout << "ZipCode: ";
    switch(zipCode.run()){
        case TUZipCode::sucess: cout << "SUCESS\n";
                                break;
        case TUZipCode::fail: cout << "Fail\n";
                                break;
    }

    TUClazz clazz;
    cout << "Clazz: ";
    switch(clazz.run()){
        case TUClazz::sucess: cout << "SUCESS\n";
                                break;
        case TUClazz::fail: cout << "Fail\n";
                                break;
    }

    TUAgencyCode agencyCode;
    cout << "AgencyCode: ";
    switch(agencyCode.run()){
        case TUAgencyCode::sucess: cout << "SUCESS\n";
                                break;
        case TUAgencyCode::fail: cout << "Fail\n";
                                break;
    }

    TUAplicationCode aplicationCode;
    cout << "AplicationCode: ";
    switch(aplicationCode.run()){
        case TUAplicationCode::sucess: cout << "SUCESS\n";
                                break;
        case TUAplicationCode::fail: cout << "Fail\n";
                                break;
    }

    TUBankCode bankCode;
    cout << "BankCode: ";
    switch(bankCode.run()){
        case TUBankCode::sucess: cout << "SUCESS\n";
                                break;
        case TUBankCode::fail: cout << "Fail\n";
                                break;
    }

    TUProductCode productCode;
    cout << "ProductCode: ";
    switch(productCode.run()){
        case TUProductCode::sucess: cout << "SUCESS\n";
                                break;
        case TUProductCode::fail: cout << "Fail\n";
                                break;
    }

    TUCpf cpf;
    cout << "Cpf: ";
    switch(cpf.run()){
        case TUCpf::sucess: cout << "SUCESS\n";
                                break;
        case TUCpf::fail: cout << "Fail\n";
                                break;
    }

    TUDatee datee;
    cout << "Datee: ";
    switch(datee.run()){
        case TUDatee::sucess: cout << "SUCESS\n";
                                break;
        case TUDatee::fail: cout << "Fail\n";
                                break;
    }

    TUEmitter emitter;
    cout << "Emitter: ";
    switch(emitter.run()){
        case TUEmitter::sucess: cout << "SUCESS\n";
                                break;
        case TUEmitter::fail: cout << "Fail\n";
                                break;
    }

    TUAddress address;
    cout << "Address: ";
    switch(address.run()){
        case TUAddress::sucess: cout << "SUCESS\n";
                                break;
        case TUAddress::fail: cout << "Fail\n";
                                break;
    }

    TUTime time;
    cout << "Time: ";
    switch(time.run()){
        case TUTime::sucess: cout << "SUCESS\n";
                                break;
        case TUTime::fail: cout << "Fail\n";
                                break;
    }

    TUName name;
    cout << "Name: ";
    switch(name.run()){
        case TUName::sucess: cout << "SUCESS\n";
                                break;
        case TUName::fail: cout << "Fail\n";
                                break;
    }

    TUNumber number;
    cout << "Number: ";
    switch(number.run()){
        case TUNumber::sucess: cout << "SUCESS\n";
                                break;
        case TUNumber::fail: cout << "Fail\n";
                                break;
    }

    TUTerm term;
    cout << "Term: ";
    switch(term.run()){
        case TUTerm::sucess: cout << "SUCESS\n";
                                break;
        case TUTerm::fail: cout << "Fail\n";
                                break;
    }

    TUPassword password;
    cout << "Password: ";
    switch(password.run()){
        case TUPassword::sucess: cout << "SUCESS\n";
                                break;
        case TUPassword::fail: cout << "Fail\n";
                                break;
    }

    TUFee fee;
    cout << "Fee: ";
    switch(fee.run()){
        case TUFee::sucess: cout << "SUCESS\n";
                                break;
        case TUFee::fail: cout << "Fail\n";
                                break;
    }

    TUAplicationValue aplicationValue;
    cout << "AplicationValue: ";
    switch(aplicationValue.run()){
        case TUAplicationValue::sucess: cout << "SUCESS\n";
                                break;
        case TUAplicationValue::fail: cout << "Fail\n";
                                break;
    }

    TUMinimumValue minimumValue;
    cout << "MinimumValue: ";
    switch(minimumValue.run()){
        case TUMinimumValue::sucess: cout << "SUCESS\n";
                                break;
        case TUMinimumValue::fail: cout << "Fail\n";
                                break;
    }

    return 0;
}
