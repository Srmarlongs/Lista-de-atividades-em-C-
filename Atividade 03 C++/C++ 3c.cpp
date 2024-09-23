#include <iostream> // Biblioteca para entrada e saída padrão

using namespace std; // Usar o namespace padrão para evitar a necessidade de prefixar com std::

int main() {
    int num1, num2; // Declaração de duas variáveis inteiras para armazenar os números

    // Solicita ao usuário para digitar o primeiro número
    cout << "Digite o primeiro número inteiro: ";
    cin >> num1; // Lê o número inteiro digitado pelo usuário e armazena em num1

    // Solicita ao usuário para digitar o segundo número
    cout << "Digite o segundo número inteiro: ";
    cin >> num2; // Lê o número inteiro digitado pelo usuário e armazena em num2

    // Compara os dois números e exibe se são iguais ou não
    if (num1 == num2) {
        cout << "Os números são iguais." << endl; // Se os números forem iguais
    } else {
        cout << "Os números são diferentes." << endl; // Se os números forem diferentes
    }

    return 0; // Indica que o programa terminou com sucesso
}

