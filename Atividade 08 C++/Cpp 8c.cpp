#include <iostream>
using namespace std;

int main() {
    // Definição e inicialização do vetor de inteiros
    int vetor[] = {12, 45, 67, 23, 89, 34, 56}; // Vetor com 7 elementos inteiros
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); // Calcula o tamanho do vetor
    int maior = vetor[0]; // Inicializa o maior valor com o primeiro elemento do vetor

    // Loop para encontrar o maior valor no vetor
    for (int i = 1; i < tamanho; ++i) {
        if (vetor[i] > maior) {
            maior = vetor[i]; // Atualiza o maior valor se o valor atual for maior
        }
    }

    // Exibe o maior valor encontrado no vetor
    cout << "O maior valor no vetor é: " << maior << endl;

    return 0; // Encerra o programa com sucesso
}

