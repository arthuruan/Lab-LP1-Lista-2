#ifndef CONSULTOR_H
#define CONSULTOR_H
#include <iostream>
#include "Funcionario.h"

class Consultor : public Funcionario{
    public:
        Consultor();
        Consultor(int m, string n, float s);

        float getSalario();
        float getSalario(float percentual);
        void print();
};

#endif // CONSULTOR_H