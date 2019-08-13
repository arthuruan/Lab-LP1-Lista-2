#include "Endereco.h"

Endereco::Endereco(){
    estado = "Sem descricao";
    cidade = "Sem descricao";
    bairro = "Sem descricao";
    rua = "Sem descricao";
    cep = "Sem descricao";
    numero = 0;
}

Endereco::Endereco(string e, string cid, string b, string r, string c, int n){
    setEstado(e);
    setCidade(cid);
    setBairro(b);
    setRua(r);
    setCep(c);
    setNumero(n);
}

string Endereco::getEstado(){
    return estado;
}

string Endereco::getCidade(){
    return cidade;
}

string Endereco::getBairro(){
    return bairro;
}

string Endereco::getRua(){
    return rua;
}

string Endereco::getCep(){
    return cep;
}

int Endereco::getNumero(){
    return numero;
}

void Endereco::setEstado(string e){
    if(e == ""){
        estado = "Sem descricao";
    }else{
        estado = e;
    }
}

void Endereco::setCidade(string cid){
    if(cid == ""){
        cidade = "Sem descricao";
    }else{
        cidade = cid;
    }
}

void Endereco::setBairro(string b){
    if(b == ""){
        bairro = "Sem descricao";
    }else{
        bairro = b;
    }
}

void Endereco::setRua(string r){
    if(r == ""){
        rua = "Sem descricao";
    }else{
        rua = r;
    }
}

void Endereco::setCep(string c){
    if(c == ""){
        cep = "Sem descricao";
    }else{
        cep = c;
    }
}

void Endereco::setNumero(int n){
    if(n < 0){
        numero = 0;
    }else{
        numero = n;
    }
}

string Endereco::toString(){
    stringstream tostring;

    tostring << estado << ", " << cidade << ", " << bairro << ", " <<
    rua << ", " << cep << ", " << numero << ".\n\n";

    return tostring.str();
}