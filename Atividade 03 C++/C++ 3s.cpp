#include <iostream>
#include <string>

int main() {
    // Vari�veis para armazenar as respostas do usu�rio
    std::string adicionarAcucar;
    std::string adicionarLeite;

    // Pergunta ao usu�rio se deseja adicionar a��car
    std::cout << "Voc� deseja adicionar a��car ao seu caf�? (sim/n�o): ";
    std::cin >> adicionarAcucar;

    // Pergunta ao usu�rio se deseja adicionar leite
    std::cout << "Voc� deseja adicionar leite ao seu caf�? (sim/n�o): ";
    std::cin >> adicionarLeite;

    // Verifica se pelo menos um dos adicionais foi escolhido
    if (adicionarAcucar == "sim" || adicionarLeite == "sim") {
        std::cout << "Caf� com adicional preparado!" << std::endl;
    } else {
        std::cout << "Caf� sem adicionais preparado!" << std::endl;
    }

    return 0;
}

