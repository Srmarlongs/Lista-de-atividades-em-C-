// Inclui a biblioteca padr�o para entrada e sa�da
#include <iostream>
#include <string>

int main () {
	
	//Declar vari�vel
	std::string Nome;
	
    // Solicita ao usu�rio para digitar "O seu nome ?"
    std::cout << "Digite o seu nome?': ";
    std::cin >> Nome;

    // Exibe o valor digitado na tela
    std::cout << "Voc� digitou: " << Nome << std::endl;
     
    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;

}
