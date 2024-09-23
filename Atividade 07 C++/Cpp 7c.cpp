#include <iostream>
using namespace std;

int main() {
    int numero;
    int soma = 0;

    cout << "Digite uma sequ�ncia de n�meros inteiros (digite 0 para encerrar):" << endl;

    // Solicita n�meros ao usu�rio at� que o n�mero 0 seja inserido
    do {
        cout << "Digite um n�mero: ";
        cin >> numero;

        // Adiciona o n�mero � soma, exceto se for 0
        if (numero != 0) {
            soma += numero;
        }
    } while (numero != 0); // O loop continua enquanto o n�mero inserido n�o for 0

    // Exibe a soma dos n�meros inseridos
    cout << "A soma dos n�meros inseridos � " << soma << "." << endl;

    return 0;
}

