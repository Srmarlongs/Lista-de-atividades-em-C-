#include <iostream> // Inclui a biblioteca iostream que permite entrada e sa�da de dados

int main() { // Fun��o principal onde a execu��o do programa come�a

    // Vari�veis para armazenar os n�meros inseridos pelo usu�rio
    double num1, num2, num3; 

    // Solicita ao usu�rio para inserir o primeiro n�mero
    std::cout << "Digite o primeiro n�mero: "; // Imprime uma mensagem na tela
    std::cin >> num1; // L� o valor inserido pelo usu�rio e armazena na vari�vel num1

    // Solicita ao usu�rio para inserir o segundo n�mero
    std::cout << "Digite o segundo n�mero: "; // Imprime uma mensagem na tela
    std::cin >> num2; // L� o valor inserido pelo usu�rio e armazena na vari�vel num2

    // Solicita ao usu�rio para inserir o terceiro n�mero
    std::cout << "Digite o terceiro n�mero: "; // Imprime uma mensagem na tela
    std::cin >> num3; // L� o valor inserido pelo usu�rio e armazena na vari�vel num3

    // Calcula a m�dia aritm�tica dos tr�s n�meros
    double media = (num1 + num2 + num3) / 3; // Soma os tr�s n�meros e divide o resultado por 3

    // Exibe o resultado da m�dia aritm�tica
    std::cout << "A m�dia aritm�tica dos n�meros " << num1 << ", " << num2 << " e " << num3 << " � " << media << "." << std::endl; 
    // Imprime o resultado na tela, mostrando os n�meros e a m�dia calculada

    return 0; // Indica que o programa terminou com sucesso
}

