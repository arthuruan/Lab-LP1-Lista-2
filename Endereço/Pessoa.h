#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
#include "Endereco.h"

using namespace std;

class Pessoa{
    public:
        Pessoa();
        Pessoa(string n);
        Pessoa(string n, string t);

        string getNome();
        string getTelefone();
        Endereco getEndereco();

        void setNome(string n);
        void setTelefone(string t);
        void setEndereco(string e, string cid, string b, string r, string c, int n);

        void print();

    private:
        string nome;
        string telefone;
        Endereco endereco;

};

#endif // PESSOA_H