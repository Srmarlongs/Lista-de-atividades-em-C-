#include <iostream>
using namespace std;

int main() {
    // Definição e inicialização do vetor de inteiros
    int vetor[] = {10, 20, 30, 40, 50}; // Vetor com 5 elementos
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); // Calcula o tamanho do vetor

    cout << "Valores dos elementos do vetor:" << endl;

    // Loop para imprimir cada elemento do vetor
    for (int i = 0; i < tamanho; ++i) {
        cout << "Elemento [" << i << "] = " << vetor[i] << endl;
    }

    return 0; // Encerra o programa com sucesso
}

