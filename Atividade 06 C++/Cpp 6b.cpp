#include <iostream>
using namespace std;

int main() {
    int numero;
    int i = 1; // Inicializa o contador

    // Solicita ao usuário para inserir um número inteiro
    cout << "Digite um número inteiro: ";
    cin >> numero;

    // Exibe a tabuada do número inserido até o número 10
    cout << "Tabuada de " << numero << ":" << endl;

    while (i <= 10) {
        cout << numero << " x " << i << " = " << numero * i << endl;
        i++; // Incrementa o contador
    }

    return 0;
}

