#include <iostream>
#include <string>

int main() {
    // Vari�veis para armazenar as respostas do usu�rio
    std::string diploma;
    std::string idade;
    
    // Pergunta ao usu�rio se ele possui um diploma de ensino superior
    std::cout << "Voc� possui um diploma de ensino superior? (sim/n�o): ";
    std::cin >> diploma;
    
    // Pergunta ao usu�rio se ele tem mais de 21 anos
    std::cout << "Voc� tem mais de 21 anos? (sim/n�o): ";
    std::cin >> idade;
    
    // Verifica as respostas e imprime a mensagem apropriada
    if (diploma == "sim" && idade == "sim") {
        std::cout << "Parab�ns, voc� est� qualificado para a vaga!" << std::endl;
    } else {
        std::cout << "Desculpe, voc� n�o est� qualificado para a vaga." << std::endl;
    }

    return 0;
}

