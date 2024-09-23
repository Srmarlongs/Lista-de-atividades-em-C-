#include <iostream> // Biblioteca para entrada e saída padrão

using namespace std; // Usar o namespace padrão para evitar a necessidade de prefixar com std::

int main() {
    int num; // Declaração de uma variável inteira para armazenar o número fornecido pelo usuário

    // Solicita ao usuário para digitar um número inteiro
    cout << "Digite um número inteiro: ";
    cin >> num; // Lê o número inteiro digitado pelo usuário e armazena na variável num

    // Verifica se o número é par
    if (num % 2 == 0) {
        cout << "O número " << num << " é par." << endl; // Se o resto da divisão por 2 for zero, o número é par
    } else {
        cout << "O número " << num << " é ímpar." << endl; // Se o resto da divisão por 2 não for zero, o número é ímpar
    }

    return 0; // Indica que o programa terminou com sucesso
}

