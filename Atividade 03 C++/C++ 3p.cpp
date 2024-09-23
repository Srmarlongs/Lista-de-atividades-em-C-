#include <iostream>
#include <string>

int main() {
    // Variáveis para armazenar as respostas do usuário
    std::string diploma;
    std::string idade;
    
    // Pergunta ao usuário se ele possui um diploma de ensino superior
    std::cout << "Você possui um diploma de ensino superior? (sim/não): ";
    std::cin >> diploma;
    
    // Pergunta ao usuário se ele tem mais de 21 anos
    std::cout << "Você tem mais de 21 anos? (sim/não): ";
    std::cin >> idade;
    
    // Verifica as respostas e imprime a mensagem apropriada
    if (diploma == "sim" && idade == "sim") {
        std::cout << "Parabéns, você está qualificado para a vaga!" << std::endl;
    } else {
        std::cout << "Desculpe, você não está qualificado para a vaga." << std::endl;
    }

    return 0;
}

