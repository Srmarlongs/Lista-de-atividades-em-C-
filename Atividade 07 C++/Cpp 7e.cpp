#include <iostream>
using namespace std;

int main() {
    int numero;   // Vari�vel para armazenar o n�mero inserido pelo usu�rio
    int soma = 0; // Vari�vel para acumular a soma dos n�meros n�o-negativos

    cout << "Digite n�meros inteiros (digite um n�mero negativo para encerrar):" << endl;

    // Loop que continua solicitando n�meros at� que um n�mero negativo seja inserido
    do {
        cout << "Digite um n�mero: ";
        cin >> numero; // L� o n�mero inserido pelo usu�rio

        // Adiciona o n�mero � soma se ele for n�o-negativo
        if (numero >= 0) {
            soma += numero; // Adiciona o n�mero � vari�vel soma
        }
        // Se o n�mero for negativo, o loop ser� encerrado
    } while (numero >= 0); // Continua o loop enquanto o n�mero inserido for maior ou igual a 0

    // Exibe a soma dos n�meros inseridos (excluindo o n�mero negativo)
    cout << "A soma dos n�meros inseridos � " << soma << "." << endl;

    return 0; // Encerra o programa com sucesso
}

