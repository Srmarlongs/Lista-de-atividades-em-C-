#include <iostream>
using namespace std;

int main() {
    int numero;
    int i = 1; // Inicializa o contador

    // Solicita ao usu�rio para inserir um n�mero inteiro
    cout << "Digite um n�mero inteiro: ";
    cin >> numero;

    // Exibe a tabuada do n�mero inserido at� o n�mero 10
    cout << "Tabuada de " << numero << ":" << endl;

    while (i <= 10) {
        cout << numero << " x " << i << " = " << numero * i << endl;
        i++; // Incrementa o contador
    }

    return 0;
}

