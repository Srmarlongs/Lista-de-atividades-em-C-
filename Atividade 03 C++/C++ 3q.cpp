#include <iostream>
#include <string>

int main() {
    // Variáveis para armazenar as respostas do usuário
    std::string assinante;
    std::string assistiu;

    // Pergunta ao usuário se ele é assinante de um serviço de streaming
    std::cout << "Você é assinante de um serviço de streaming? (sim/não): ";
    std::cin >> assinante;

    // Pergunta ao usuário se ele já assistiu à série específica
    std::cout << "Você já assistiu à série específica? (sim/não): ";
    std::cin >> assistiu;

    // Verifica as respostas e imprime a mensagem apropriada
    if (assinante == "sim" && assistiu == "sim") {
        std::cout << "Ótimo, agora você pode assistir à nova temporada!" << std::endl;
    } else {
        std::cout << "Parece que você não está qualificado para assistir à nova temporada ainda." << std::endl;
    }

    return 0;
}

