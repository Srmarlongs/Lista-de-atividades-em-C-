#include <iostream> // Inclui a biblioteca padrão para entrada e saída

using namespace std; // Usa o namespace padrão para evitar a necessidade de prefixar std::

int main() { // Função principal que é o ponto de entrada do programa

    // Declara variáveis para armazenar os dois números e a soma
    double num1, num2, soma;

    // Solicita ao usuário para digitar o primeiro número
    cout << "Digite o primeiro número: ";
    cin >> num1; // Lê o primeiro número da entrada padrão e armazena em num1

    // Solicita ao usuário para digitar o segundo número
    cout << "Digite o segundo número: ";
    cin >> num2; // Lê o segundo número da entrada padrão e armazena em num2

    // Calcula a soma dos dois números
    soma = num1 + num2;

    // Exibe a soma dos dois números na tela
    cout << "A soma dos números é: " << soma << endl;

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

