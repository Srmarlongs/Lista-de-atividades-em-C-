#include <iostream>
#include <string>

int main() {
    int idade;
    std::string temCarteira;

    // Solicita a idade do usu�rio
    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    // Verifica se a entrada da idade � v�lida
    if (idade < 0) {
        std::cout << "Idade inv�lida. Por favor, insira uma idade positiva." << std::endl;
        return 1;
    }

    // Solicita se o usu�rio possui carteira de motorista
    std::cout << "Voc� possui carteira de motorista? (sim/n�o): ";
    std::cin >> temCarteira;

    // Verifica se a entrada de carteira de motorista � v�lida
    if (temCarteira != "sim" && temCarteira != "n�o") {
        std::cout << "Resposta inv�lida. Por favor, responda com 'sim' ou 'n�o'." << std::endl;
        return 1;
    }

    // Verifica se o usu�rio pode dirigir
    if (idade > 18 && temCarteira == "sim") {
        std::cout << "Voc� pode dirigir." << std::endl;
    } else {
        std::cout << "Voc� n�o pode dirigir." << std::endl;
    }

    return 0;
}

