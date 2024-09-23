#include <iostream>  // Biblioteca necess�ria para entrada e sa�da de dados
#include <cmath>     // Biblioteca que cont�m a fun��o abs() para c�lculo do valor absoluto

int main() {
    // Declara��o de uma vari�vel para armazenar o n�mero inserido pelo usu�rio
    double numero;
    
    // Solicita ao usu�rio para digitar um n�mero
    std::cout << "Digite um n�mero: ";
    
    // L� o n�mero digitado pelo usu�rio e armazena na vari�vel 'numero'
    std::cin >> numero;
    
    // Calcula o valor absoluto do n�mero utilizando a fun��o abs() da biblioteca <cmath>
    // abs() retorna o valor absoluto de um n�mero
    double valor_absoluto = std::abs(numero);
    
    // Exibe o resultado para o usu�rio
    // std::cout � utilizado para imprimir o valor absoluto
    std::cout << "O valor absoluto de " << numero << " � " << valor_absoluto << std::endl;
    
    return 0;  // Retorna 0 para indicar que o programa terminou corretamente
}

