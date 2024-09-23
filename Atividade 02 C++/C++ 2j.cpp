#include <iostream> // Inclui a biblioteca padrão para entrada e saída

using namespace std; // Usa o namespace padrão para evitar a necessidade de prefixar std::

int main() { // Função principal que é o ponto de entrada do programa

    // Declara variáveis para armazenar os três números e a média
    double num1, num2, num3, media;

    // Solicita ao usuário para digitar o primeiro número
    cout << "Digite o primeiro número: "; 
    cin >> num1; // Lê o primeiro número da entrada padrão e armazena na variável 'num1'

    // Solicita ao usuário para digitar o segundo número
    cout << "Digite o segundo número: "; 
    cin >> num2; // Lê o segundo número da entrada padrão e armazena na variável 'num2'

    // Solicita ao usuário para digitar o terceiro número
    cout << "Digite o terceiro número: "; 
    cin >> num3; // Lê o terceiro número da entrada padrão e armazena na variável 'num3'

    // Calcula a média aritmética dos três números
    media = (num1 + num2 + num3) / 3;

    // Exibe a média aritmética para o usuário
    cout << "A média aritmética dos três números é: " << media << endl;

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

