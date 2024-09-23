#include <iostream>
#include <string>

int main() {
    int idade;
    std::string temCarteira;

    // Solicita a idade do usuário
    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    // Verifica se a entrada da idade é válida
    if (idade < 0) {
        std::cout << "Idade inválida. Por favor, insira uma idade positiva." << std::endl;
        return 1;
    }

    // Solicita se o usuário possui carteira de motorista
    std::cout << "Você possui carteira de motorista? (sim/não): ";
    std::cin >> temCarteira;

    // Verifica se a entrada de carteira de motorista é válida
    if (temCarteira != "sim" && temCarteira != "não") {
        std::cout << "Resposta inválida. Por favor, responda com 'sim' ou 'não'." << std::endl;
        return 1;
    }

    // Verifica se o usuário pode dirigir
    if (idade > 18 && temCarteira == "sim") {
        std::cout << "Você pode dirigir." << std::endl;
    } else {
        std::cout << "Você não pode dirigir." << std::endl;
    }

    return 0;
}

