#include <iostream>
using namespace std;

int main() {
    int numero;
    int soma = 0;
    char continuar;

    do {
        // Solicita ao usu�rio para inserir um n�mero inteiro
        cout << "Digite um n�mero inteiro: ";
        cin >> numero;

        // Adiciona o n�mero � soma
        soma += numero;

        // Pergunta ao usu�rio se deseja continuar inserindo n�meros
        cout << "Deseja inserir outro n�mero? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S'); // O loop continua enquanto o usu�rio responder 's' ou 'S'

    // Exibe a soma dos n�meros inseridos
    cout << "A soma dos n�meros inseridos � " << soma << "." << endl;

    return 0;
}

