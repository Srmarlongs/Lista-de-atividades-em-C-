#include <iostream>
using namespace std;

int main() {
    int numero;
    int soma = 0;

    cout << "Digite uma sequência de números inteiros (digite 0 para encerrar):" << endl;

    // Solicita números ao usuário até que o número 0 seja inserido
    do {
        cout << "Digite um número: ";
        cin >> numero;

        // Adiciona o número à soma, exceto se for 0
        if (numero != 0) {
            soma += numero;
        }
    } while (numero != 0); // O loop continua enquanto o número inserido não for 0

    // Exibe a soma dos números inseridos
    cout << "A soma dos números inseridos é " << soma << "." << endl;

    return 0;
}

