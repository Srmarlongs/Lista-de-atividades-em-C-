#include <iostream> // Inclui a biblioteca padr�o para entrada e sa�da

using namespace std; // Usa o namespace padr�o para evitar a necessidade de prefixar std::

int main() { // Fun��o principal que � o ponto de entrada do programa

    // Declara vari�veis para armazenar os dois n�meros e a soma
    double num1, num2, soma;

    // Solicita ao usu�rio para digitar o primeiro n�mero
    cout << "Digite o primeiro n�mero: ";
    cin >> num1; // L� o primeiro n�mero da entrada padr�o e armazena em num1

    // Solicita ao usu�rio para digitar o segundo n�mero
    cout << "Digite o segundo n�mero: ";
    cin >> num2; // L� o segundo n�mero da entrada padr�o e armazena em num2

    // Calcula a soma dos dois n�meros
    soma = num1 + num2;

    // Exibe a soma dos dois n�meros na tela
    cout << "A soma dos n�meros �: " << soma << endl;

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

