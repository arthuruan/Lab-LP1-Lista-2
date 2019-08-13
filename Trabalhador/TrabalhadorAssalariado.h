#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"


class TrabalhadorAssalariado : public Trabalhador{
    public:
        TrabalhadorAssalariado();
        TrabalhadorAssalariado(string n, float s);

        float calcularPagamentoSemanal(int horasSemanais);

        void print();
};

#endif // TRABALHADORASSALARIADO_H
