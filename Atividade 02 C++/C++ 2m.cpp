#include <iostream> // Inclui a biblioteca para entrada e saída de dados

int main() {
    // Variável para armazenar a temperatura em Celsius
    double celsius, fahrenheit;

    // Solicita ao usuário para inserir a temperatura em Celsius
    std::cout << "Digite a temperatura em Celsius: ";
    std::cin >> celsius; // Lê a temperatura em Celsius inserida pelo usuário

    // Converte a temperatura de Celsius para Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32; // Aplica a fórmula de conversão

    // Exibe o resultado
    std::cout << celsius << " graus Celsius equivalem a " << fahrenheit << " graus Fahrenheit." << std::endl;

    return 0; // Indica que o programa terminou com sucesso
}

