#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"


class TrabalhadorPorHora : public Trabalhador{
    private:
        float valorDaHora;
    public:
        TrabalhadorPorHora();
        TrabalhadorPorHora(string n, float v);

        float getValorDaHora();
        void setValorDaHora(float v);

        float calcularPagamentoSemanal(int horasSemanais);

        void print();
};

#endif // TRABALHADORPORHORA_H
