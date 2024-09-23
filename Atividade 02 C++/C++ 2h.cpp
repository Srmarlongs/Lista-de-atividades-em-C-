#include <iostream> // Inclui a biblioteca padrão para entrada e saída

using namespace std; // Usa o namespace padrão para evitar a necessidade de prefixar std::

int main() { // Função principal que é o ponto de entrada do programa
    
    // Declara variáveis para armazenar os dois números e o resultado da multiplicação
    double num1, num2, resultado;

    // Solicita ao usuário para digitar o primeiro número
    cout << "Digite o primeiro número: "; 
    cin >> num1; // Lê o primeiro número da entrada padrão e armazena em num1

    // Solicita ao usuário para digitar o segundo número
    cout << "Digite o segundo número: "; 
    cin >> num2; // Lê o segundo número da entrada padrão e armazena em num2

    // Realiza a multiplicação dos dois números e armazena o resultado na variável 'resultado'
    resultado = num1 * num2;

    // Exibe o resultado da multiplicação para o usuário
    cout << "O resultado da multiplicação é: " << resultado << endl;

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

