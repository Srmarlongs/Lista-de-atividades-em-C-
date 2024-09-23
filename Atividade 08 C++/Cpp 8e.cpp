#include <iostream>
#include <algorithm> // Para a função sort
using namespace std;

// Função de comparação para ordenação em ordem decrescente
bool compararDecrescente(int a, int b) {
    return a > b; // Retorna true se a for maior que b
}

int main() {
    // Definição e inicialização do vetor de inteiros
    int vetor[] = {34, 7, 23, 32, 5, 62, 45}; // Vetor com 7 elementos inteiros
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); // Calcula o tamanho do vetor

    // Ordena o vetor em ordem decrescente
    sort(vetor, vetor + tamanho, compararDecrescente);

    // Exibe os valores do vetor ordenado
    cout << "Valores do vetor em ordem decrescente:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl; // Linha em branco para a formatação

    return 0; // Encerra o programa com sucesso
}

