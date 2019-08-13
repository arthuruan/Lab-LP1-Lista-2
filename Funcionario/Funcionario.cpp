#include "Funcionario.h"

Funcionario::Funcionario(){
    matricula = 0;
    nome = "Sem nome";
    salario = 0.0;
}

int Funcionario::getMatricula(){
    return matricula;
}

string Funcionario::getNome(){
    return nome;
}

float Funcionario::getSalario(){
    return salario;
}

float Funcionario::getSalario(float percentual){
    
}

void Funcionario::setMatricula(int m){
    if(m < 0){
        matricula = 0;
    }else{
        matricula = m;
    }
}
void Funcionario::setNome(string n){
    if(n < ""){
        nome = "Sem nome";
    }else{
        nome = n;
    }
}

void Funcionario::setSalario(float s){
    if(s < 0){
        salario = 0;
    }else{
        salario = s;
    }
}

string Funcionario::toString(){
    stringstream tostring;

    tostring << "Matricula: " << matricula << endl <<
    "Nome: " << nome << endl << "Salario: " << salario << " R$\n\n"; 

    return tostring.str();
}

void Funcionario::print(){
    //cout << toString();
}