#include <iostream>
using namespace std;

int main() {
    int numero;
    int soma = 0;

    cout << "Digite n�meros inteiros (digite um n�mero negativo para parar):" << endl;

    // Solicita n�meros ao usu�rio at� que um n�mero negativo seja inserido
    while (true) {
        cout << "Digite um n�mero: ";
        cin >> numero;

        // Verifica se o n�mero � negativo para encerrar o loop
        if (numero < 0) {
            break;
        }

        // Adiciona o n�mero � soma
        soma += numero;
    }

    // Exibe a soma dos n�meros inseridos (excluindo o n�mero negativo)
    cout << "A soma dos n�meros inseridos � " << soma << "." << endl;

    return 0;
}

