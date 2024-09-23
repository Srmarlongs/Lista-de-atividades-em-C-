#include <iostream> // Inclui a biblioteca para entrada e sa�da de dados

int main() {
    // Vari�vel para armazenar a temperatura em Celsius
    double celsius, fahrenheit;

    // Solicita ao usu�rio para inserir a temperatura em Celsius
    std::cout << "Digite a temperatura em Celsius: ";
    std::cin >> celsius; // L� a temperatura em Celsius inserida pelo usu�rio

    // Converte a temperatura de Celsius para Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32; // Aplica a f�rmula de convers�o

    // Exibe o resultado
    std::cout << celsius << " graus Celsius equivalem a " << fahrenheit << " graus Fahrenheit." << std::endl;

    return 0; // Indica que o programa terminou com sucesso
}

