#include <iostream>
using namespace std;

int main() {
    // Definição e inicialização do vetor de números decimais
    double vetor[] = {5.5, 8.2, 7.1, 6.9, 9.4}; // Vetor com 5 elementos decimais
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); // Calcula o tamanho do vetor
    double soma = 0.0; // Variável para acumular a soma dos elementos

    // Loop para somar todos os elementos do vetor
    for (int i = 0; i < tamanho; ++i) {
        soma += vetor[i]; // Adiciona o valor do elemento atual à soma
    }

    // Calcula a média
    double media = soma / tamanho;

    // Exibe a média
    cout << "A média dos valores do vetor é: " << media << endl;

    return 0; // Encerra o programa com sucesso
}

