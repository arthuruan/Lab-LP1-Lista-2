#ifndef ENDERECO_H
#define ENDERECO_H
#include <iostream>
#include <sstream>

using namespace std;

class Endereco{
    private:
        string estado;
        string cidade;
        string bairro;
        string rua;
        string cep;
        int numero;   
    public:
        Endereco();
        Endereco(string e, string cid, string b, string r, string c, int n);

        string getEstado();
        string getCidade();
        string getBairro();
        string getRua();
        string getCep();
        int getNumero();

        void setEstado(string e);
        void setCidade(string cid);
        void setBairro(string b);
        void setRua(string r);
        void setCep(string c);
        void setNumero(int n);

        string toString();

};

#endif // ENDERECO_H