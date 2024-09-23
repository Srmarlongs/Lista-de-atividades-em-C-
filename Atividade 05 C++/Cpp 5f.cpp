#include <iostream>
using namespace std;

int main() {
    int numero;
    int maiorNumero = INT_MIN; // Inicializa com o menor valor poss�vel de um inteiro
    char continuar;

    do {
        // Solicita ao usu�rio para inserir um n�mero inteiro
        cout << "Digite um n�mero inteiro: ";
        cin >> numero;

        // Verifica se o n�mero inserido � maior que o maior n�mero atual
        if (numero > maiorNumero) {
            maiorNumero = numero;
        }

        // Pergunta ao usu�rio se deseja continuar
        cout << "Deseja inserir outro n�mero? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');  // O loop continua enquanto o usu�rio responder 's' ou 'S'

    // Exibe o maior n�mero inserido
    cout << "O maior n�mero inserido foi " << maiorNumero << "." << endl;

    return 0;
}

