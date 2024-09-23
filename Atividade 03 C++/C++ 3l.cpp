#include <iostream> // Biblioteca para entrada e saída padrão
#include <cmath>    // Biblioteca para funções matemáticas, como abs()

using namespace std; // Usar o namespace padrão para evitar a necessidade de prefixar com std::

int main() {
    int num1, num2; // Declaração de duas variáveis inteiras para armazenar os números fornecidos pelo usuário

    // Solicita ao usuário para digitar o primeiro número inteiro
    cout << "Digite o primeiro número inteiro: ";
    cin >> num1; // Lê o primeiro número inteiro digitado pelo usuário e armazena em num1

    // Solicita ao usuário para digitar o segundo número inteiro
    cout << "Digite o segundo número inteiro: ";
    cin >> num2; // Lê o segundo número inteiro digitado pelo usuário e armazena em num2

    // Calcula a diferença absoluta entre os dois números
    int diferenca = abs(num1 - num2);

    // Verifica se a diferença é menor ou igual a 10
    if (diferenca <= 10) {
        cout << "A diferença entre " << num1 << " e " << num2 << " é menor ou igual a 10." << endl; // Se a condição for verdadeira
    } else {
        cout << "A diferença entre " << num1 << " e " << num2 << " é maior que 10." << endl; // Se a condição não for verdadeira
    }

    return 0; // Indica que o programa terminou com sucesso
}

