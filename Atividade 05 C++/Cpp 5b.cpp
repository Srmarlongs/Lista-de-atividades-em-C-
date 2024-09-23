#include <iostream>
using namespace std;

int main() {
    int numero;  // Vari�vel para armazenar o n�mero inserido pelo usu�rio

    // Solicitar ao usu�rio para inserir um n�mero inteiro positivo
    cout << "Digite um n�mero inteiro positivo: ";
    cin >> numero;

    // Verificar se o n�mero inserido � positivo
    if (numero < 0) {
        cout << "O n�mero deve ser positivo." << endl;
    } else {
        // Exibir todos os n�meros pares entre 0 e o n�mero inserido
        cout << "N�meros pares entre 0 e " << numero << ":" << endl;
        
        // Ajustar o valor de `numero` para incluir o pr�prio n�mero se for par
        for (int i = 0; i <= numero; i += 2) {
            cout << i << " ";
        }

        cout << endl;  // Para terminar a linha ap�s a listagem dos n�meros
    }

    return 0;
}

