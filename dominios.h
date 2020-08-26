#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

using namespace std;

// Declaração da classe Cep.
class Cep{
private:
    int cep;
    string local;
    void validar(int) throw (invalid_argument);

public:

    void setCep(int) throw (invalid_argument);
    int getCep() const {
        return cep;
    }
    int getLocal() const {
        return local;
    }

}
// Declaração da classe Classe.
class Classe{
private:
    string classe;
    void validar(String) throw (invalid_argument);

public:
    string getClasse() const{
        return classe;
    }
    void setClasse(string) throw (invalid_argument);
}
#endif // DOMINIOS_H_INCLUDED
