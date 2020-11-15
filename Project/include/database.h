#ifndef DATABASE_H
#define DATABASE_H
#include <list>

// Posteriomente remover.

#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>

#include "sqlite3.h"
#include "entities.h"

using namespace std;

//---------------------------------------------------------------------------
//Classe EErroPersistencia.

class EErroPersistencia {
private:
        string mensagem;
public:
        EErroPersistencia(string);
        string what();
};

//---------------------------------------------------------------------------
//Classe ElementoResultado.

class ElementoResultado {
private:
        string nomeColuna;
        string valorColuna;
public:
        void setNomeColuna(const string&);
        string getNomeColuna() const;
        void setValorColuna(const string&);
        string getValorColuna() const;
};

//---------------------------------------------------------------------------
//Classe ComandoSQL.

class ComandoSQL {
private:
        const char *nomeBancoDados;
        sqlite3 *bd;
        char *mensagem;
        int rc;
        void conectar();
        void desconectar();
        static int callback(void *, int, char **, char **);

protected:
        static list<ElementoResultado> listaResultado;
        string comandoSQL;
public:
        ComandoSQL() {
             nomeBancoDados = "productInvestment.db";                             //Informa o nome do banco de dados.
        }
        void executar();
};


//---------------------------------------------------------------------------
//Classe ComandReadUser.

class ComandGetUser:public ComandoSQL {
public:
        ComandGetUser(Cpf);
        User getResult();
};

class ComandInsertUser:public ComandoSQL {
public:
        ComandInsertUser(User);
};

class ComandDeleteUser:public ComandoSQL {
public:
        ComandDeleteUser(Cpf);
};


/**
//---------------------------------------------------------------------------
//Classe ComandoPesquisarAluno.

class ComandoPesquisarAluno:public ComandoSQL {
public:
        ComandoPesquisarAluno(Matricula);
        Aluno getResultado();
};

//---------------------------------------------------------------------------
//Classe ComandoCadastrarAluno.

class ComandoCadastrarAluno:public ComandoSQL {
public:
        ComandoCadastrarAluno(Aluno);
};

//---------------------------------------------------------------------------
//Classe ComandoAtualizarAluno.

class ComandoAtualizarAluno:public ComandoSQL {
public:
        ComandoAtualizarAluno(Aluno);
};

//---------------------------------------------------------------------------
//Classe ComandoRemoverAluno.

class ComandoRemoverAluno:public ComandoSQL {
public:
        ComandoRemoverAluno(Matricula);
};

//---------------------------------------------------------------------------
//Classe ComandoCadastrarDisciplina.

class ComandoCadastrarDisciplina:public ComandoSQL {
public:
        ComandoCadastrarDisciplina(Disciplina);
};

**/
//---------------------------------------------------------------------------
//Classe ElementoResultado.

inline string ElementoResultado::getNomeColuna() const {
        return nomeColuna;
}

inline string ElementoResultado::getValorColuna() const {
        return valorColuna;
}


#endif // DATABASE_H
