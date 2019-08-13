#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"

int main(void){

    Trabalhador* t1 = new TrabalhadorAssalariado("Arthur", 4800);
    Trabalhador* t2 = new TrabalhadorPorHora("Ruan", 4.25);

    t1->calcularPagamentoSemanal(50);
    t1->print();
    cout << "Salario Semanal: " << t1->calcularPagamentoSemanal(50) << endl;

    t2->calcularPagamentoSemanal(60);
    t2->print();
    cout <<"Salario Semanal: " << t2->calcularPagamentoSemanal(45) << endl;
    
    return 0;
}