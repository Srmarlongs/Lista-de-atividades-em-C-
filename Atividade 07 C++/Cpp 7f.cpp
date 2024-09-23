#include <iostream>
using namespace std;

int main() {
    int numero;

    // Loop para garantir que o usu�rio insira um n�mero inteiro positivo
    do {
        // Solicita ao usu�rio para inserir um n�mero inteiro positivo
        cout << "Digite um n�mero inteiro positivo: ";
        cin >> numero;

        // Verifica se o n�mero � positivo
        if (numero <= 0) {
            cout << "N�mero inv�lido. Deve ser um n�mero inteiro positivo." << endl;
        }
    } while (numero <= 0); // Repete at� o usu�rio inserir um n�mero positivo

    // Exibe os n�meros �mpares entre 0 e o n�mero inserido
    cout << "N�meros �mpares entre 0 e " << numero << ":" << endl;
    for (int i = 1; i <= numero; i += 2) {
        cout << i << " ";
    }
    cout << endl; // Linha em branco para a formata��o

    return 0; // Encerra o programa com sucesso
}

