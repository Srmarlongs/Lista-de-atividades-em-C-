// Inclui a biblioteca padrão para entrada e saída
#include <iostream>
#include <string>

int main () {
	
	//Declar variável
	std::string Nome;
	
    // Solicita ao usuário para digitar "O seu nome ?"
    std::cout << "Digite o seu nome?': ";
    std::cin >> Nome;

    // Exibe o valor digitado na tela
    std::cout << "Você digitou: " << Nome << std::endl;
     
    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;

}
