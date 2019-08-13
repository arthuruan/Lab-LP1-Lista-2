#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <sstream>

using namespace std;

class Funcionario{
    protected:
        int matricula;
        string nome;
        float salario;
    public:
        Funcionario();

        int getMatricula();
        string getNome();
        virtual float getSalario();
        virtual float getSalario(float percentual);

        void setMatricula(int m);
        void setNome(string n);
        void setSalario(float s);

        string toString();
        virtual void print();

};

#endif // FUNCIONARIO_H