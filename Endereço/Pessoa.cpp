#include "Pessoa.h"

Pessoa::Pessoa(){
    nome = "Sem nome";
    telefone = "Sem telefone";
    endereco = Endereco();
}

Pessoa::Pessoa(string n){
    setNome(n);
}

Pessoa::Pessoa(string n, string t){
    setNome(n);
    setTelefone(t);
}

string Pessoa::getNome(){
    return nome;
}

string Pessoa::getTelefone(){
    return telefone;
}

Endereco Pessoa::getEndereco(){
    return endereco;
}

void Pessoa::setNome(string n){
    if(n == ""){
        nome = "Sem nome";
    }else{
        nome = n;
    }
}

void Pessoa::setTelefone(string t){
    if(t == ""){
        telefone = "Sem telefone";
    }else{
        telefone = t;
    }
}
void Pessoa::setEndereco(string e, string cid, string b, string r, string c, int n){
    endereco.setEstado(e);
    endereco.setCidade(cid);
    endereco.setBairro(b);
    endereco.setRua(r);
    endereco.setCep(c);
    endereco.setNumero(n);
}

void Pessoa::print(){
    cout << "Nome: " << nome << "\nTelefone: " << telefone << "\nEndereco: " << endereco.toString();
}