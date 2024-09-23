#include <iostream> // Inclui a biblioteca para entrada e saída de dados

int main() {
    // Variáveis para armazenar o preço do produto, o percentual de desconto e o preço final
    double preco, descontoPercentual, descontoValor, precoFinal;

    // Solicita ao usuário para inserir o preço do produto
    std::cout << "Digite o preço do produto: ";
    std::cin >> preco; // Lê o preço inserido pelo usuário

    // Solicita ao usuário para inserir o percentual de desconto
    std::cout << "Digite o percentual de desconto: ";
    std::cin >> descontoPercentual; // Lê o percentual de desconto inserido pelo usuário

    // Calcula o valor do desconto
    descontoValor = preco * (descontoPercentual / 100); // Calcula o desconto em reais

    // Calcula o preço final com o desconto
    precoFinal = preco - descontoValor; // Subtrai o valor do desconto do preço original

    // Exibe o preço final
    std::cout << "O preço final com desconto é R$ " << precoFinal << "." << std::endl;

    return 0; // Indica que o programa terminou com sucesso
}

