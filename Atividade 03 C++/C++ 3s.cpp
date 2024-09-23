#include <iostream>
#include <string>

int main() {
    // Variáveis para armazenar as respostas do usuário
    std::string adicionarAcucar;
    std::string adicionarLeite;

    // Pergunta ao usuário se deseja adicionar açúcar
    std::cout << "Você deseja adicionar açúcar ao seu café? (sim/não): ";
    std::cin >> adicionarAcucar;

    // Pergunta ao usuário se deseja adicionar leite
    std::cout << "Você deseja adicionar leite ao seu café? (sim/não): ";
    std::cin >> adicionarLeite;

    // Verifica se pelo menos um dos adicionais foi escolhido
    if (adicionarAcucar == "sim" || adicionarLeite == "sim") {
        std::cout << "Café com adicional preparado!" << std::endl;
    } else {
        std::cout << "Café sem adicionais preparado!" << std::endl;
    }

    return 0;
}

