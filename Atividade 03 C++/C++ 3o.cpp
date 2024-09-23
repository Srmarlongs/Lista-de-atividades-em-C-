#include <iostream>
#include <string>
#include <cctype> // Necess�rio para a fun��o tolower

int main() {
	
	// Variaveis 
    std::string desejaComprar;
    std::string temDinheiro;

    // Pergunta se o usu�rio deseja comprar um carro novo
    std::cout << "Voc� deseja comprar um carro novo? (sim/n�o): ";
    std::cin >> desejaComprar;

  
    // Verifica se a resposta de compra � v�lida
    if (desejaComprar != "sim" && desejaComprar != "n�o") {
        std::cout << "Resposta inv�lida. Por favor, responda com 'sim' ou 'n�o'." << std::endl;
        return 1;
    }

    // Se o usu�rio deseja comprar um carro novo, pergunta sobre o dinheiro
    if (desejaComprar == "sim") {
        std::cout << "Voc� tem dinheiro suficiente para a compra? (sim/n�o): ";
        std::cin >> temDinheiro;


        // Verifica se a resposta sobre o dinheiro � v�lida
        if (temDinheiro != "sim" && temDinheiro != "n�o") {
            std::cout << "Resposta inv�lida. Por favor, responda com 'sim' ou 'n�o'." << std::endl;
            return 1;
        }

        // Verifica se o usu�rio pode comprar o carro
        if (temDinheiro == "sim") {
            std::cout << "Parab�ns, voc� pode comprar um carro novo!" << std::endl;
        } else {
            std::cout << "Infelizmente, voc� n�o pode comprar um carro novo no momento." << std::endl;
        }
    } else {
        std::cout << "Voc� decidiu n�o comprar um carro novo." << std::endl;
    }

    return 0;
}

