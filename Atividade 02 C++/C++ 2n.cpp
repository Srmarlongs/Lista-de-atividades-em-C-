#include <iostream> // Inclui a biblioteca para entrada e sa�da de dados

int main() {
    // Vari�veis para armazenar o pre�o do produto, o percentual de desconto e o pre�o final
    double preco, descontoPercentual, descontoValor, precoFinal;

    // Solicita ao usu�rio para inserir o pre�o do produto
    std::cout << "Digite o pre�o do produto: ";
    std::cin >> preco; // L� o pre�o inserido pelo usu�rio

    // Solicita ao usu�rio para inserir o percentual de desconto
    std::cout << "Digite o percentual de desconto: ";
    std::cin >> descontoPercentual; // L� o percentual de desconto inserido pelo usu�rio

    // Calcula o valor do desconto
    descontoValor = preco * (descontoPercentual / 100); // Calcula o desconto em reais

    // Calcula o pre�o final com o desconto
    precoFinal = preco - descontoValor; // Subtrai o valor do desconto do pre�o original

    // Exibe o pre�o final
    std::cout << "O pre�o final com desconto � R$ " << precoFinal << "." << std::endl;

    return 0; // Indica que o programa terminou com sucesso
}

