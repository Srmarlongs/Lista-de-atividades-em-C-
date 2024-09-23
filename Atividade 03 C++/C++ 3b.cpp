#include <iostream> // Inclui a biblioteca padrão para operações de entrada e saída

using namespace std; // Permite usar objetos da biblioteca padrão sem prefixar com std::

int main() {
    int numero1, numero2; // Declaração das variáveis para armazenar os dois números inteiros

    // Solicita ao usuário para digitar o primeiro número
    cout << "Digite o primeiro número inteiro: ";
    cin >> numero1; // Lê o valor do primeiro número inserido pelo usuário

    // Solicita ao usuário para digitar o segundo número
    cout << "Digite o segundo número inteiro: ";
    cin >> numero2; // Lê o valor do segundo número inserido pelo usuário

    // Verifica se o primeiro número é menor que o segundo
    if (numero1 < numero2) {
        // Exibe uma mensagem se o primeiro número for menor que o segundo
        cout << "O primeiro número (" << numero1 << ") é menor que o segundo número (" << numero2 << ")." << endl;
    } else {
        // Exibe uma mensagem se o primeiro número não for menor que o segundo
        cout << "O primeiro número (" << numero1 << ") não é menor que o segundo número (" << numero2 << ")." << endl;
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

