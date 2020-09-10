#include "domains.h"
#include <regex>
#include <vector>
#include<string>
#include<iostream>
#include <algorithm>


using namespace std;

/**valida se o CEP est entre os intervalos permitidos**/
void ZipCode::validate(int zipCode) throw (invalid_argument) {
    if(zipCode < 1000000 || (5999999<zipCode && zipCode < 8000000)|| (8499999 < zipCode && zipCode < 20000000) ||
       (26600999 <zipCode && zipCode < 40000000) || (41999999< zipCode && zipCode < 60000000) || zipCode >70999999){
        throw invalid_argument("Erro parametro.");
       }
}
/**Seta o estado correspondente ao CEP**/
void ZipCode::setState(string state) {
    this->state = state;
}
/**Seta o CEP**/
void ZipCode::setZipCode(int zipCode) throw (invalid_argument) {

    validate(zipCode);

    if((1000000 <= zipCode && zipCode <= 5999999) ||(8000000 <= zipCode && zipCode<= 8499999))
        setState("Sao Paulo");
    else if (20000000 <= zipCode  && zipCode<= 26600999)
        setState("Rio de Janeiro");
    else if (70000000 <= zipCode &&  zipCode <= 70999999)
        setState("Brasilia");
    else if (40000000 <= zipCode  && zipCode <= 41999999)
        setState(state = "Salvador");
    else if (60000000 <= zipCode && zipCode<= 60999999)
        setState("Fortaleza");

    this->zipCode = zipCode;
}

/**Valida se a classe corresponde a LCA, LCI, LF ou LC**/
void Clazz::validate(string clazz) throw (invalid_argument){
    if(!regex_match(clazz, regex("(LCA)|(LCI)|(LF)|(LC)")))
        throw invalid_argument("Erro parametro.");
}
/**Seta a Classe dos produtos**/
void Clazz::setClazz (string clazz) throw (invalid_argument){
    validate(clazz);
    this->clazz = clazz;
}

/**Valida se o codigo da agencia so contem numero e nao e 0000**/
void AgencyCode::validate(vector<int> code) throw(invalid_argument){
    if(code.size() != 4)
        throw invalid_argument("Erro parametro.");
    if(code[0] == 0 && code[1] == 0 && code[2] == 0 && code[3] == 0)
        throw invalid_argument("Erro parametro.");
    for(int i=0; i < code.size(); i++){
        if(code[i] <0 || code[i] > 9)
            throw invalid_argument("Erro parametro.");
    }
}
/**Seta o codigo da agencia**/
void AgencyCode::setCode(vector<int> code) throw(invalid_argument){
    validate(code);
    this->code = code;
}

/**Valida se o codigo da aplicacao  so contem numero e nao e 00000**/
void AplicationCode::validate(vector<int> code) throw(invalid_argument){
    if(code.size() != 5)
        throw invalid_argument("Erro parametro.");
    if(code[0] == 0 && code[1] == 0 && code[2] == 0 && code[3] == 0 && code[4]== 0 )
        throw invalid_argument("Erro parametro.");
    for(int i=0; i < code.size(); i++){
        if(code[i] <0 || code[i] > 9)
            throw invalid_argument("Erro parametro.");
    }
}
/**Seta codigo da aplicacao**/
void AplicationCode::setCode(vector<int> code) throw(invalid_argument){
    validate(code);
    this->code = code;
}

/**Valida se o codigo do banco corresponde a algum dos principais bancos do Brasil.
Sendo eles: BB(001), Bradesco(237), Caixa(104), Itau(314) e Santander(033)**/
void BankCode::validate(int code) throw(invalid_argument){
    if(code != 001 && code != 237 && code != 104 && code != 314 && code != 033)
        throw invalid_argument("Erro parametro.");
}
/**Seta codigo do banco**/
void BankCode::setCode(int code) throw(invalid_argument){
    validate(code);
    this->code = code;
}

/**Valida se o codigo do produto so contem numero e nao e 000**/
void ProductCode::validate(vector<int> code) throw(invalid_argument){
    if(code.size() != 3)
        throw invalid_argument("Erro parametro.");
    if(code[0] == 0 && code[1] == 0 && code[2] == 0)
        throw invalid_argument("Erro parametro.");
    for(int number : code){
        if(number < 0 || number > 9)
            throw invalid_argument("Erro parametro.");
    }
}
/**Seta codigo do produto**/
void ProductCode::setCode(vector<int> code) throw(invalid_argument){
    validate(code);
    this->code = code;
}

/**Valida se o CPF esta no formato adequado e utiliza calculo de verificacao dos dois ultimos digitos do CPF
para validacao**/
void Cpf::validate(string cpf) throw (invalid_argument){
    vector<int> numbers;
    if(cpf.size() != 14){
        throw invalid_argument("Erro parametro.");
    }
    cpf.erase(remove(cpf.begin(), cpf.end(), '.'), cpf.end());
    cpf.erase(remove(cpf.begin(), cpf.end(), '-'), cpf.end());
    //checar se contem apenas numeros
    if(!regex_match(cpf, regex(R"((?:^|\s)([+-]?[[:digit:]]+(?:\.[[:digit:]]+)?)(?=$|\s))")))
        throw invalid_argument("Erro parametro.");
    //transforma de string para numero
    for(int i = 0 ; i< cpf.size(); i++){
        numbers.push_back(atoi(cpf.substr(i,1).c_str()));
    }
    if(numbers.size() != 11){
        throw invalid_argument("Erro parametro.");
    }

    //verificar primeiro digito
    int sum = numbers[0]*10 + numbers[1]*9 + numbers[2]*8 + numbers[3]*7 + numbers[4]*6 + numbers[5]*5 + numbers[6]*4
            + numbers[7]*3 + numbers[8]*2;
    int quocient = sum % 11;
    if(quocient < 2 ){
        if(numbers[9] != 0)
            throw invalid_argument("Erro parametro.");
            }
    else if(numbers[9] != (11-quocient))
        throw invalid_argument("Erro parametro.");


    //verificar segundo digito
    sum = numbers[0]*11 + numbers[1]*10 + numbers[2]*9 + numbers[3]*8 + numbers[4]*7 + numbers[5]*6 + numbers[6]*5
            + numbers[7]*4 + numbers[8]*3 + numbers[9]*2;
    quocient = sum % 11;
    if(quocient < 2 ){
        if(numbers[10] != 0)
            throw invalid_argument("Erro parametro.");
    }
    else if(numbers[10] != (11 - quocient))
        throw invalid_argument("Erro parametro.");

}
/**Seta CPF**/
void Cpf::setCpf (string cpf) throw (invalid_argument){
    validate(cpf);
    this->cpf = cpf;
}

/**Valida se a data esta no formato certo e dentro do range de 2020 a 2099**/
void Datee::validate(string date) throw(invalid_argument){

    if(date.substr(2,1) != "/" || date.substr(5,1) != "/")
        throw invalid_argument("Erro parametro.");

    int day = stoi(date.substr(0,2));
    int month = stoi(date.substr(3,2));
    int year = stoi(date.substr(6,4));

    if(year<2020 || year > 2099)
        throw invalid_argument("Erro parametro.");
    if(month <1 || month > 12 ){
        throw invalid_argument("Erro parametro.");
    }
    if((month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) && (day < 1 || day > 31))
        throw invalid_argument("Erro parametro.");

    if((month==4 || month==6 || month==9 || month==11) && (day < 1 || day > 30))
        throw invalid_argument("Erro parametro.");

    if((month == 2) && (day < 1 || day > 29)){
        throw invalid_argument("Erro parametro.");
    }else{
        if(day == 29){
            if(year % 4 != 0)
                throw invalid_argument("Erro parametro.");
            if(year % 100 == 0)
                throw invalid_argument("Erro parametro.");
        }
    }
    this->day = day;
    this->month = month;
    this->year = year;
}
/**Seta data**/
void Datee::setDatee(string date) throw(invalid_argument){
    validate(date);
    this->datee = date;
}

/**Valida se o emissor contem apenas caracteres permtidos e o tamanho do texto**/
void Emitter::validate(string emitter) throw (invalid_argument){

    if(emitter.size()<5 || emitter.size() > 30)
        throw invalid_argument("Erro parametro.");
    if(!regex_match(emitter, regex("^[a-zA-Z0-9 .-]*$")))
        throw invalid_argument("Erro parametro.");

    smatch matches;
    regex_search(emitter, matches, regex("( [^A-Z0-9])|(-[^a-zA-Z0-9])|(\\.{1,}[^a-zA-Z0-9])"));
    if(!matches.empty())
        throw invalid_argument("Erro parametro.");

}
/**Seta emissor**/
void Emitter::setEmitter(string emitter) throw (invalid_argument){
    validate(emitter);
    this->emitter = emitter;
}


/**Valida se o endereco possui apenas caracteres permitidos e seu tamanho**/
void Address::validate(string address) throw (invalid_argument){
    if(address.size()<5 || address.size() > 20)
        throw invalid_argument("Erro parametro.");

    if(!regex_match(address, regex("^[a-zA-Z0-9 .]*$")))
        throw invalid_argument("Erro parametro.");

    smatch matches;
    regex_search(address, matches, regex("( [^A-Z0-9])|(\\.{1,}[^a-zA-Z0-9])"));
    if(!matches.empty())
        throw invalid_argument("Erro parametro.");

}
/**Seta endereco**/
void Address::setAddress(string address) throw (invalid_argument){
    validate(address);
    this->address = address;
}

/**Valida se o horario esta no formato HH:MM e esta entre 13:00 e 17:00**/
void Time::validate(string time) throw (invalid_argument){
    if(time.substr(2,1) != ":")
        throw invalid_argument("Erro parametro.");
    int hour = stoi(time.substr(0,2));
    int minutes = stoi(time.substr(3, 2));
    if(hour < 13 || hour >17)
        throw invalid_argument("Erro parametro.");
    if(minutes <0 || minutes>59)
        throw invalid_argument("Erro parametro.");
    this->hour = hour;
    this->minutes = minutes;
}
/**Seta horario**/
void Time::setTime(string time) throw (invalid_argument){
    validate(time);
    this->time = time;
}

/**Valida se o nome possui apenas letras e espacos, e seu tamanho**/
void Name::validate(string name) throw (invalid_argument){

    if(name.size()<5 || name.size() > 30)
        throw invalid_argument("Erro parametro.");

    if(!regex_match(name, regex("^[a-zA-Z ]*$")))
        throw invalid_argument("Erro parametro.");

    smatch matches;
    regex_search(name, matches, regex("(( |^)[^A-Z])"));
    if(!matches.empty())
        throw invalid_argument("Erro parametro.");

    int i = 0;
    int count = 0;
    while(i<name.size()) {
        if(regex_match(name.substr(i,1), regex("[a-zA-Z]")))
           count ++;
        i++;
    }
    if(count < 5)
       throw invalid_argument("Erro parametro.");

}
/**Seta nome**/
void Name::setName(string name) throw (invalid_argument){
    validate(name);
    this->name = name;
}

/**Valida se numero possui apenas numeros e seu o formato e xxxxxx-x**/
void Number::validate(string number) throw (invalid_argument){
     vector<int> numbers;
     if(number.size()!= 8)
        throw invalid_argument("Erro parametro.");
    if(number.substr(6,1) != "-")
        throw invalid_argument("Erro parametro.");
    number.erase(remove(number.begin(), number.end(), '-'), number.end());
    //checar se contem apenas numeros
    if(!regex_match(number, regex(R"((?:^|\s)([+-]?[[:digit:]]+(?:\.[[:digit:]]+)?)(?=$|\s))")))
        throw invalid_argument("Erro parametro.");
    //transforma de string para numero
    for(int i = 0 ; i< number.size(); i++){
        numbers.push_back(atoi(number.substr(i,1).c_str()));
    }
    if(numbers.size() != 7){
        throw invalid_argument("Erro parametro.");
    }
    //calculo verificador Precisa ter?
}
/**Seta numero**/
void Number::setNumber(string number) throw (invalid_argument){
    validate(number);
    this->number = number;
}

/**Valida se o prazo e um valor entre: 6,12,18,24,30,36,42,48,54,60,66,72**/
void Term::validate(int term) throw (invalid_argument){
    if(term!= 6 && term != 12 && term != 18 && term != 24 && term != 30 && term != 36
       && term != 42 && term != 48 && term != 54 && term != 60 && term != 66 && term != 72) //arrumar a regex
        throw invalid_argument("Erro parametro.");
}
/**Seta prazo**/
void Term::setTerm(int term) throw (invalid_argument){
    validate(term);
    this->term = term;
}

/**Valida se a senha possui apenas numeros e nao sao repetidos**/
void Password::validate(string password) throw (invalid_argument){
    vector<int> numbers;
    int digit;
    if(password.size() != 6)
        throw invalid_argument("Erro parametro.");
     if(!regex_match(password, regex(R"((?:^|\s)([+-]?[[:digit:]]+(?:\.[[:digit:]]+)?)(?=$|\s))")))
        throw invalid_argument("Erro parametro.");
    //transforma de string para numero
    numbers.push_back(atoi(password.substr(0,1).c_str()));
    for(int i = 1 ; i< password.size(); i++){
        digit = atoi(password.substr(i,1).c_str());
        for(int j = 0 ; j< numbers.size(); j++){
            if (digit == numbers[j])
                throw invalid_argument("Erro parametro.");
        }
        numbers.push_back(digit);
    }
}
/**Seta senha**/
void Password::setPassword(string password) throw (invalid_argument){
    validate(password);
    this->password = password;
}

/**Valida se a taxa esta entre 0 e 200**/
void Fee::validate(int fee) throw (invalid_argument){
    if(fee < 0 || fee > 200)
        throw invalid_argument("Erro parametro.");
}
/**Seta taxa**/
void Fee::setFee(int fee) throw (invalid_argument){
    validate(fee);
    this->fee = fee;
}

/**Valida se o valor de aplicacao esta entre 0 e 1000000**/
void AplicationValue::validate(double aplicationValue) throw (invalid_argument){
    if(aplicationValue < 0 || aplicationValue > 1000000)
        throw invalid_argument("Erro parametro.");
}
/**Seta valor de aplicacao**/
void AplicationValue::setAplicationValue(double aplicationValue) throw (invalid_argument){
    validate(aplicationValue);
    this->aplicationValue = aplicationValue;
}

/**Valida se o valor minimo esta entre: 1000.00, 5000.00, 10000.00, 50000.00**/
void MinimumValue::validate(double minimumValue) throw (invalid_argument){
    if(minimumValue != 1000.00 && minimumValue != 5000.00 && minimumValue != 10000.00  && minimumValue != 50000.00)
        throw invalid_argument("Erro parametro.");
}
/**Seta valor minimo**/
void MinimumValue::setMinimumValue(double minimumValue) throw (invalid_argument){
    validate(minimumValue);
    this->minimumValue = minimumValue;
}


