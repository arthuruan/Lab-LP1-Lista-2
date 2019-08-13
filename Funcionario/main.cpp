#include "Consultor.h"

int main(void){
    Consultor s1 = Consultor(123, "Arthur", 50.00);
    Funcionario* s2 = new Consultor(321, "Ruhtra", 05.00);

    s1.print();//salario sem acrescimo

    s1.getSalario();
    s1.print();//salario com acrescimo de 10%

    s2->print();//salario sem acrescimo

    s2->getSalario(20);
    s2->print();//salario com acresimo de 20%

    return 0;
}