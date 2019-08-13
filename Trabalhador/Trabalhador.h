#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <iostream>

using namespace std;

class Trabalhador{
    protected:
        string nome;
        float salario;
    public:
        Trabalhador();
        
        string getNome();
        double getSalario();

        void setNome(string n);
        void setSalario(float s);

        virtual float calcularPagamentoSemanal(int horasSemanais);
        virtual void print();
};

#endif // TRABALHADOR_H