#include <iostream>
using namespace std;

int main() {
    int soma = 0; // Variável para armazenar a soma dos números pares

    // Itera sobre os números de 1 a 100
    for (int i = 1; i <= 100; ++i) {
        if (i % 2 == 0) { // Verifica se o número é par
            soma += i; // Adiciona o número par à soma
        }
    }

    // Exibe a soma dos números pares
    cout << "A soma dos números pares entre 1 e 100 é " << soma << "." << endl;

    return 0;
}

