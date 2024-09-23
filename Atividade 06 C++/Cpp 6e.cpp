#include <iostream>
using namespace std;

int main() {
    int numero;
    int soma = 0;

    cout << "Digite números inteiros (digite um número negativo para parar):" << endl;

    // Solicita números ao usuário até que um número negativo seja inserido
    while (true) {
        cout << "Digite um número: ";
        cin >> numero;

        // Verifica se o número é negativo para encerrar o loop
        if (numero < 0) {
            break;
        }

        // Adiciona o número à soma
        soma += numero;
    }

    // Exibe a soma dos números inseridos (excluindo o número negativo)
    cout << "A soma dos números inseridos é " << soma << "." << endl;

    return 0;
}

