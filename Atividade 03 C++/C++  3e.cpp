#include <iostream> // Biblioteca para entrada e saída padrão

using namespace std; // Usar o namespace padrão para evitar a necessidade de prefixar com std::

int main() {
    double num1, num2; // Declaração de duas variáveis do tipo double para armazenar números reais

    // Solicita ao usuário para digitar o primeiro número real
    cout << "Digite o primeiro número real: ";
    cin >> num1; // Lê o número real digitado pelo usuário e armazena em num1

    // Solicita ao usuário para digitar o segundo número real
    cout << "Digite o segundo número real: ";
    cin >> num2; // Lê o número real digitado pelo usuário e armazena em num2

    // Verifica se o primeiro número é maior ou igual ao segundo número
    if (num1 >= num2) {
        cout << "O primeiro número é maior ou igual ao segundo número." << endl; // Se a condição for verdadeira
    } else {
        cout << "O primeiro número é menor que o segundo número." << endl; // Se a condição não for verdadeira
    }

    return 0; // Indica que o programa terminou com sucesso
}

