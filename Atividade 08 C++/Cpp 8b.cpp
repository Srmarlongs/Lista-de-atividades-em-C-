#include <iostream>
using namespace std;

int main() {
    // Defini��o e inicializa��o do vetor de n�meros decimais
    double vetor[] = {5.5, 8.2, 7.1, 6.9, 9.4}; // Vetor com 5 elementos decimais
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); // Calcula o tamanho do vetor
    double soma = 0.0; // Vari�vel para acumular a soma dos elementos

    // Loop para somar todos os elementos do vetor
    for (int i = 0; i < tamanho; ++i) {
        soma += vetor[i]; // Adiciona o valor do elemento atual � soma
    }

    // Calcula a m�dia
    double media = soma / tamanho;

    // Exibe a m�dia
    cout << "A m�dia dos valores do vetor �: " << media << endl;

    return 0; // Encerra o programa com sucesso
}

