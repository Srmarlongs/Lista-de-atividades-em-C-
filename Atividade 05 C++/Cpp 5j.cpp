#include <iostream>
using namespace std;

int main() {
    int soma = 0; // Vari�vel para armazenar a soma dos n�meros pares

    // Itera sobre os n�meros de 1 a 100
    for (int i = 1; i <= 100; ++i) {
        if (i % 2 == 0) { // Verifica se o n�mero � par
            soma += i; // Adiciona o n�mero par � soma
        }
    }

    // Exibe a soma dos n�meros pares
    cout << "A soma dos n�meros pares entre 1 e 100 � " << soma << "." << endl;

    return 0;
}

