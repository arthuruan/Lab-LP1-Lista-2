#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(){
    nome = "Sem nome";
    salario = valorDaHora = 0;
}

TrabalhadorPorHora::TrabalhadorPorHora(string n, float v){
    setNome(n);
    setValorDaHora(v);
}

float TrabalhadorPorHora::getValorDaHora(){
    return valorDaHora;
}

void TrabalhadorPorHora::setValorDaHora(float v){
    if(v < 0){
        valorDaHora = 0;
    }else{
        valorDaHora = v;
    }
}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais){
    float salariosemanal = 0;

    if(horasSemanais <= 40){
        salariosemanal = valorDaHora * horasSemanais;
    }else{
        horasSemanais -= 40;
        salariosemanal = valorDaHora * 40;
        salariosemanal += (horasSemanais * 1.5) * valorDaHora;
    }

    salario = salariosemanal * 4;

    return salariosemanal;
}

void TrabalhadorPorHora::print(){
    cout << "Nome: " << nome << endl
    << "Salario mensal: " << salario << endl;
}
