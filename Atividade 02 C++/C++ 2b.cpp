#include <iostream> // Inclui a biblioteca padrão para entrada e saída

using namespace std; // Usa o namespace padrão para evitar a necessidade de prefixar std::

int main() { // Função principal que é o ponto de entrada do programa
    
    // Declara uma variável para armazenar o número digitado pelo usuário
    double numero;

    // Solicita ao usuário para digitar um número
    cout << "Digite um número: ";
    cin >> numero; // Lê o número digitado da entrada padrão e armazena na variável 'numero'

    // Calcula o dobro do número
    double dobro = numero * 2;

    // Exibe o dobro do número na tela
    cout << "O dobro do número é: " << dobro << endl;

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

