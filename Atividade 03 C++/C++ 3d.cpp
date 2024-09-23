#include <iostream> // Biblioteca para entrada e saída padrão

using namespace std; // Usar o namespace padrão para evitar a necessidade de prefixar com std::

int main() {
    int num1, num2, num3; // Declaração de três variáveis inteiras para armazenar os números

    // Solicita ao usuário para digitar o primeiro número
    cout << "Digite o primeiro número inteiro: ";
    cin >> num1; // Lê o número inteiro digitado pelo usuário e armazena em num1

    // Solicita ao usuário para digitar o segundo número
    cout << "Digite o segundo número inteiro: ";
    cin >> num2; // Lê o número inteiro digitado pelo usuário e armazena em num2

    // Solicita ao usuário para digitar o terceiro número
    cout << "Digite o terceiro número inteiro: ";
    cin >> num3; // Lê o número inteiro digitado pelo usuário e armazena em num3

    // Verifica se o primeiro número é menor que o segundo e maior que o terceiro
    if (num1 < num2 && num1 > num3) {
        cout << "O primeiro número é menor que o segundo e maior que o terceiro." << endl; // Se a condição for verdadeira
    } else {
        cout << "O primeiro número não atende às condições especificadas." << endl; // Se a condição não for verdadeira
    }

    return 0; // Indica que o programa terminou com sucesso
}

