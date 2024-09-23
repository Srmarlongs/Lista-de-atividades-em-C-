#include <iostream>
using namespace std;

int main() {
    int numero;
    int soma = 0;
    char continuar;

    do {
        // Solicita ao usuário para inserir um número inteiro
        cout << "Digite um número inteiro: ";
        cin >> numero;

        // Adiciona o número à soma
        soma += numero;

        // Pergunta ao usuário se deseja continuar inserindo números
        cout << "Deseja inserir outro número? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S'); // O loop continua enquanto o usuário responder 's' ou 'S'

    // Exibe a soma dos números inseridos
    cout << "A soma dos números inseridos é " << soma << "." << endl;

    return 0;
}

