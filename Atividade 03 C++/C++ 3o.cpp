#include <iostream>
#include <string>
#include <cctype> // Necessário para a função tolower

int main() {
	
	// Variaveis 
    std::string desejaComprar;
    std::string temDinheiro;

    // Pergunta se o usuário deseja comprar um carro novo
    std::cout << "Você deseja comprar um carro novo? (sim/não): ";
    std::cin >> desejaComprar;

  
    // Verifica se a resposta de compra é válida
    if (desejaComprar != "sim" && desejaComprar != "não") {
        std::cout << "Resposta inválida. Por favor, responda com 'sim' ou 'não'." << std::endl;
        return 1;
    }

    // Se o usuário deseja comprar um carro novo, pergunta sobre o dinheiro
    if (desejaComprar == "sim") {
        std::cout << "Você tem dinheiro suficiente para a compra? (sim/não): ";
        std::cin >> temDinheiro;


        // Verifica se a resposta sobre o dinheiro é válida
        if (temDinheiro != "sim" && temDinheiro != "não") {
            std::cout << "Resposta inválida. Por favor, responda com 'sim' ou 'não'." << std::endl;
            return 1;
        }

        // Verifica se o usuário pode comprar o carro
        if (temDinheiro == "sim") {
            std::cout << "Parabéns, você pode comprar um carro novo!" << std::endl;
        } else {
            std::cout << "Infelizmente, você não pode comprar um carro novo no momento." << std::endl;
        }
    } else {
        std::cout << "Você decidiu não comprar um carro novo." << std::endl;
    }

    return 0;
}

