#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicita ao usu�rio para inserir um n�mero inteiro positivo
    cout << "Digite um n�mero inteiro positivo: ";
    cin >> numero;

    // Verifica se o n�mero inserido � positivo
    if (numero <= 0) {
        cout << "O n�mero deve ser um inteiro positivo. Programa encerrado." << endl;
        return 1; // Encerra o programa com um c�digo de erro
    }

    // Exibe os divisores do n�mero
    cout << "Os divisores de " << numero << " s�o:" << endl;
    
    for (int i = 1; i <= numero; ++i) {
        if (numero % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl; // Linha em branco para a formata��o

    return 0;
}

