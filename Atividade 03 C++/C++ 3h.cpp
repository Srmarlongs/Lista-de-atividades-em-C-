#include <iostream> // Biblioteca para entrada e saída padrão

using namespace std; // Usar o namespace padrão para evitar a necessidade de prefixar com std::

int main() {
    int ano; // Declaração de uma variável inteira para armazenar o ano fornecido pelo usuário

    // Solicita ao usuário para digitar um ano
    cout << "Digite um ano: ";
    cin >> ano; // Lê o ano digitado pelo usuário e armazena na variável ano

    // Verifica se o ano é bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        cout << "O ano " << ano << " é bissexto." << endl; // Se o ano atende às condições para ser bissexto
    } else {
        cout << "O ano " << ano << " não é bissexto." << endl; // Se o ano não atende às condições para ser bissexto
    }

    return 0; // Indica que o programa terminou com sucesso
}

