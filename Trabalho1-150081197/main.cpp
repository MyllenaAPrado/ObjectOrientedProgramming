#include <iostream>
#include "domains.h"
#include "tests.h"

using namespace std;

int main()
{

    TUZipCode zipCode;
    cout << "ZipCode: ";
    switch(zipCode.run()){
        case TUZipCode::sucess: cout << "SUCESS\n";
                                break;
        case TUZipCode::failure: cout << "FAILURE\n";
                                break;
    }

    TUClazz clazz;
    cout << "Clazz: ";
    switch(clazz.run()){
        case TUClazz::sucess: cout << "SUCESS\n";
                                break;
        case TUClazz::failure: cout << "FAILURE\n";
                                break;
    }

    TUAgencyCode agencyCode;
    cout << "AgencyCode: ";
    switch(agencyCode.run()){
        case TUAgencyCode::sucess: cout << "SUCESS\n";
                                break;
        case TUAgencyCode::failure: cout << "FAILURE\n";
                                break;
    }

    TUAplicationCode aplicationCode;
    cout << "AplicationCode: ";
    switch(aplicationCode.run()){
        case TUAplicationCode::sucess: cout << "SUCESS\n";
                                break;
        case TUAplicationCode::failure: cout << "FAILURE\n";
                                break;
    }

    TUBankCode bankCode;
    cout << "BankCode: ";
    switch(bankCode.run()){
        case TUBankCode::sucess: cout << "SUCESS\n";
                                break;
        case TUBankCode::failure: cout << "FAILURE\n";
                                break;
    }

    TUProductCode productCode;
    cout << "ProductCode: ";
    switch(productCode.run()){
        case TUProductCode::sucess: cout << "SUCESS\n";
                                break;
        case TUProductCode::failure: cout << "FAILURE\n";
                                break;
    }

    TUCpf cpf;
    cout << "Cpf: ";
    switch(cpf.run()){
        case TUCpf::sucess: cout << "SUCESS\n";
                                break;
        case TUCpf::failure: cout << "FAILURE\n";
                                break;
    }

    TUDatee datee;
    cout << "Datee: ";
    switch(datee.run()){
        case TUDatee::sucess: cout << "SUCESS\n";
                                break;
        case TUDatee::failure: cout << "FAILURE\n";
                                break;
    }

    TUEmitter emitter;
    cout << "Emitter: ";
    switch(emitter.run()){
        case TUEmitter::sucess: cout << "SUCESS\n";
                                break;
        case TUEmitter::failure: cout << "FAILURE\n";
                                break;
    }

    TUAddress address;
    cout << "Address: ";
    switch(address.run()){
        case TUAddress::sucess: cout << "SUCESS\n";
                                break;
        case TUAddress::failure: cout << "FAILURE\n";
                                break;
    }

    TUTime time;
    cout << "Time: ";
    switch(time.run()){
        case TUTime::sucess: cout << "SUCESS\n";
                                break;
        case TUTime::failure: cout << "FAILURE\n";
                                break;
    }

    TUName name;
    cout << "Name: ";
    switch(name.run()){
        case TUName::sucess: cout << "SUCESS\n";
                                break;
        case TUName::failure: cout << "FAILURE\n";
                                break;
    }

    TUNumber number;
    cout << "Number: ";
    switch(number.run()){
        case TUNumber::sucess: cout << "SUCESS\n";
                                break;
        case TUNumber::failure: cout << "FAILURE\n";
                                break;
    }

    TUTerm term;
    cout << "Term: ";
    switch(term.run()){
        case TUTerm::sucess: cout << "SUCESS\n";
                                break;
        case TUTerm::failure: cout << "FAILURE\n";
                                break;
    }

    TUPassword password;
    cout << "Password: ";
    switch(password.run()){
        case TUPassword::sucess: cout << "SUCESS\n";
                                break;
        case TUPassword::failure: cout << "FAILURE\n";
                                break;
    }

    TUFee fee;
    cout << "Fee: ";
    switch(fee.run()){
        case TUFee::sucess: cout << "SUCESS\n";
                                break;
        case TUFee::failure: cout << "FAILURE\n";
                                break;
    }

    TUAplicationValue aplicationValue;
    cout << "AplicationValue: ";
    switch(aplicationValue.run()){
        case TUAplicationValue::sucess: cout << "SUCESS\n";
                                break;
        case TUAplicationValue::failure: cout << "FAILURE\n";
                                break;
    }

    TUMinimumValue minimumValue;
    cout << "MinimumValue: ";
    switch(minimumValue.run()){
        case TUMinimumValue::sucess: cout << "SUCESS\n";
                                break;
        case TUMinimumValue::failure: cout << "FAILURE\n";
                                break;
    }

    return 0;
}
