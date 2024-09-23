#include <iostream>
using namespace std;

int main() {
    int numero;
    int maiorNumero = INT_MIN; // Inicializa com o menor valor possível de um inteiro
    char continuar;

    do {
        // Solicita ao usuário para inserir um número inteiro
        cout << "Digite um número inteiro: ";
        cin >> numero;

        // Verifica se o número inserido é maior que o maior número atual
        if (numero > maiorNumero) {
            maiorNumero = numero;
        }

        // Pergunta ao usuário se deseja continuar
        cout << "Deseja inserir outro número? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');  // O loop continua enquanto o usuário responder 's' ou 'S'

    // Exibe o maior número inserido
    cout << "O maior número inserido foi " << maiorNumero << "." << endl;

    return 0;
}

