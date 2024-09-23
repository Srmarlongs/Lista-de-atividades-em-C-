#include <iostream>  // Biblioteca necessária para entrada e saída de dados
#include <cmath>     // Biblioteca que contém a função abs() para cálculo do valor absoluto

int main() {
    // Declaração de uma variável para armazenar o número inserido pelo usuário
    double numero;
    
    // Solicita ao usuário para digitar um número
    std::cout << "Digite um número: ";
    
    // Lê o número digitado pelo usuário e armazena na variável 'numero'
    std::cin >> numero;
    
    // Calcula o valor absoluto do número utilizando a função abs() da biblioteca <cmath>
    // abs() retorna o valor absoluto de um número
    double valor_absoluto = std::abs(numero);
    
    // Exibe o resultado para o usuário
    // std::cout é utilizado para imprimir o valor absoluto
    std::cout << "O valor absoluto de " << numero << " é " << valor_absoluto << std::endl;
    
    return 0;  // Retorna 0 para indicar que o programa terminou corretamente
}

