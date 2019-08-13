#include "Consultor.h"

Consultor::Consultor(){
    Funcionario();
}

Consultor::Consultor(int m, string n, float s){
    setMatricula(m);
    setNome(n);
    setSalario(s);
}

float Consultor::getSalario(){
    return salario += (salario * 0.1);
}

float Consultor::getSalario(float percentual){

    percentual = percentual/100;

    return salario += (salario * percentual);
}

void Consultor::print(){
    cout << toString(); //<< "Salario com aumento(10%): " << getSalario() << endl;
}