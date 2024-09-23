#include <iostream>
#include <algorithm> // Para a função sort
using namespace std;

int main() {
    // Definição e inicialização do vetor de inteiros
    int vetor[] = {34, 7, 23, 32, 5, 62, 45}; // Vetor com 7 elementos inteiros
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); // Calcula o tamanho do vetor

    // Ordena o vetor em ordem crescente
    sort(vetor, vetor + tamanho);

    // Exibe os valores do vetor ordenado
    cout << "Valores do vetor em ordem crescente:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl; // Linha em branco para a formatação

    return 0; // Encerra o programa com sucesso
}

