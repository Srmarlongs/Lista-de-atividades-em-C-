#include <iostream> // Biblioteca para entrada e saída padrão

using namespace std; // Usar o namespace padrão para evitar a necessidade de prefixar com std::

int main() {
    int num; // Declaração de uma variável inteira para armazenar o número fornecido pelo usuário

    // Solicita ao usuário para digitar um número inteiro
    cout << "Digite um número inteiro: ";
    cin >> num; // Lê o número inteiro digitado pelo usuário e armazena na variável num

    // Verifica se o número é positivo
    if (num > 0) {
        cout << "O número " << num << " é positivo." << endl; // Se o número for maior que zero
    } else {
        cout << "O número " << num << " não é positivo." << endl; // Se o número for menor ou igual a zero
    }

    return 0; // Indica que o programa terminou com sucesso
}

