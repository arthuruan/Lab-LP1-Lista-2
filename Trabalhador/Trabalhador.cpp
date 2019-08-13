#include "Trabalhador.h"

Trabalhador::Trabalhador(){
    nome = "Sem nome";
    salario = 0;
}

string Trabalhador::getNome(){
    return nome;
}

double Trabalhador::getSalario(){
    return salario;
}

void Trabalhador::setNome(string n){
    if(n == ""){
        nome = "Sem nome";
    }else{
        nome = n;
    }
}

void Trabalhador::setSalario(float s){
    if(s < 0){
        salario = 0;
    }else{
        salario = s;
    }
}

float Trabalhador::calcularPagamentoSemanal(int horasSemanais){

}

void Trabalhador::print(){

}
