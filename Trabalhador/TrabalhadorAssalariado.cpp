#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(){
    nome = "Sem nome";
    salario = 0;
}

TrabalhadorAssalariado::TrabalhadorAssalariado(string n, float s){
    setNome(n);
    setSalario(s);
}

float TrabalhadorAssalariado::calcularPagamentoSemanal(int horasSemanais){
    return salario / 4;
}

void TrabalhadorAssalariado::print(){
    cout << "Nome: " << nome << endl
    << "Salario mensal: " << salario << endl;
}
