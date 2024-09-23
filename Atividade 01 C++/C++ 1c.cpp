#include <iostream>
#include <string>

int main () {
	
	//Declar variável
	std::string VOF;
	

    // Solicita ao usuário para digitar "verdadeiro" ou "falso"
    std::cout << "Digite 'verdadeiro' ou 'falso': ";
    std::cin >> VOF;

    // Exibe o valor digitado na tela
    std::cout << "Você digitou: " << VOF << std::endl;

    return 0;

}
