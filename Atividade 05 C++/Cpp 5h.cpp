#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicita ao usuário para inserir um número inteiro positivo
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    // Verifica se o número inserido é positivo
    if (numero <= 0) {
        cout << "O número deve ser um inteiro positivo. Programa encerrado." << endl;
        return 1; // Encerra o programa com um código de erro
    }

    // Exibe os divisores do número
    cout << "Os divisores de " << numero << " são:" << endl;
    
    for (int i = 1; i <= numero; ++i) {
        if (numero % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl; // Linha em branco para a formatação

    return 0;
}

