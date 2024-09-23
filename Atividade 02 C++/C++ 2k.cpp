#include <iostream> // Inclui a biblioteca iostream que permite entrada e saída de dados

int main() { // Função principal onde a execução do programa começa

    // Variáveis para armazenar os números inseridos pelo usuário
    double num1, num2, num3; 

    // Solicita ao usuário para inserir o primeiro número
    std::cout << "Digite o primeiro número: "; // Imprime uma mensagem na tela
    std::cin >> num1; // Lê o valor inserido pelo usuário e armazena na variável num1

    // Solicita ao usuário para inserir o segundo número
    std::cout << "Digite o segundo número: "; // Imprime uma mensagem na tela
    std::cin >> num2; // Lê o valor inserido pelo usuário e armazena na variável num2

    // Solicita ao usuário para inserir o terceiro número
    std::cout << "Digite o terceiro número: "; // Imprime uma mensagem na tela
    std::cin >> num3; // Lê o valor inserido pelo usuário e armazena na variável num3

    // Calcula a média aritmética dos três números
    double media = (num1 + num2 + num3) / 3; // Soma os três números e divide o resultado por 3

    // Exibe o resultado da média aritmética
    std::cout << "A média aritmética dos números " << num1 << ", " << num2 << " e " << num3 << " é " << media << "." << std::endl; 
    // Imprime o resultado na tela, mostrando os números e a média calculada

    return 0; // Indica que o programa terminou com sucesso
}

