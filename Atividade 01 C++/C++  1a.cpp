#include <iostream> // Inclui a biblioteca padr�o para entrada e sa�da


int main() { // Adiciona a fun��o principal 'main', que � o ponto de entrada do program

// Declara uma vari�vel do tipo inteiro
    int numero; 

 // Solicita ao usu�rio para digitar um n�mero
    std::cout << "Digite um n�mero inteiro: ";
    
 // L� o n�mero digitado pelo usu�rio e armazena na vari�vel
    std::cin >> numero; 

    // Exibe o valor da vari�vel
    std::cout << "Voc� digitou o n�mero: " << numero << std::endl;

// Retorna 0 para indicar que o programa terminou com sucesso
    return 0; 
    
}
