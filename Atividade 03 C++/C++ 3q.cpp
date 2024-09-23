#include <iostream>
#include <string>

int main() {
    // Vari�veis para armazenar as respostas do usu�rio
    std::string assinante;
    std::string assistiu;

    // Pergunta ao usu�rio se ele � assinante de um servi�o de streaming
    std::cout << "Voc� � assinante de um servi�o de streaming? (sim/n�o): ";
    std::cin >> assinante;

    // Pergunta ao usu�rio se ele j� assistiu � s�rie espec�fica
    std::cout << "Voc� j� assistiu � s�rie espec�fica? (sim/n�o): ";
    std::cin >> assistiu;

    // Verifica as respostas e imprime a mensagem apropriada
    if (assinante == "sim" && assistiu == "sim") {
        std::cout << "�timo, agora voc� pode assistir � nova temporada!" << std::endl;
    } else {
        std::cout << "Parece que voc� n�o est� qualificado para assistir � nova temporada ainda." << std::endl;
    }

    return 0;
}

