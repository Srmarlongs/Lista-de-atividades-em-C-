#include <iostream> // Inclui a biblioteca padrão para entrada e saída

using namespace std; // Usa o namespace padrão para evitar a necessidade de prefixar std::

int main() { // Função principal que é o ponto de entrada do programa
    
    // Declara variáveis para armazenar os dois números e o resultado da divisão
    double num1, num2, resultado;

    // Solicita ao usuário para digitar o primeiro número
    cout << "Digite o primeiro número: ";
    cin >> num1; // Lê o primeiro número da entrada padrão e armazena em num1

    // Solicita ao usuário para digitar o segundo número
    cout << "Digite o segundo número: ";
    cin >> num2; // Lê o segundo número da entrada padrão e armazena em num2

    // Verifica se o segundo número é diferente de zero para evitar divisão por zero
    if (num2 != 0) {
        // Calcula o resultado da divisão
        resultado = num1 / num2;

        // Exibe o resultado da divisão na tela
        cout << "O resultado da divisão é: " << resultado << endl;
    } else {
        // Exibe uma mensagem de erro se o segundo número for zero
        cout << "Erro: Divisão por zero não é permitida." << endl;
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

