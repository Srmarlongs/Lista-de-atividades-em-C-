#include <iostream>
#include <string>

int main () {
	
	//Declar vari�vel
	std::string VOF;
	

    // Solicita ao usu�rio para digitar "verdadeiro" ou "falso"
    std::cout << "Digite 'verdadeiro' ou 'falso': ";
    std::cin >> VOF;

    // Exibe o valor digitado na tela
    std::cout << "Voc� digitou: " << VOF << std::endl;

    return 0;

}
