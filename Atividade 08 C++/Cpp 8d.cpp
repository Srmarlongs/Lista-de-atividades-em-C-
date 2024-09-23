#include <iostream>
using namespace std;

int main() {
    // Definição e inicialização do vetor de inteiros
    int vetor[] = {45, 67, 12, 89, 34, 56, 23}; // Vetor com 7 elementos inteiros
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); // Calcula o tamanho do vetor
    int menor = vetor[0]; // Inicializa o menor valor com o primeiro elemento do vetor

    // Loop para encontrar o menor valor no vetor
    for (int i = 1; i < tamanho; ++i) {
        if (vetor[i] < menor) {
            menor = vetor[i]; // Atualiza o menor valor se o valor atual for menor
        }
    }

    // Exibe o menor valor encontrado no vetor
    cout << "O menor valor no vetor é: " << menor << endl;

    return 0; // Encerra o programa com sucesso
}

