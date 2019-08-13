#include "Pessoa.h"

int main(void){
    Pessoa p1 = Pessoa("Arthur", "987935160");
    Pessoa p2 = Pessoa("Ruan");

    p1.setEndereco("Paraiba", "Joao Pessoa", "Mangabeira", "Rua coronel ...", "58058-835", 214);

    p2.setTelefone("987509982");
    p2.setEndereco("PB", "JP", "Manaira", "Av. Epitacio", "88559-69", 1544);
    
    p1.print();
    p2.print();

    return 0;
}