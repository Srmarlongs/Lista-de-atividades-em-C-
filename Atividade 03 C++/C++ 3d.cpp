#include <iostream> // Biblioteca para entrada e sa�da padr�o

using namespace std; // Usar o namespace padr�o para evitar a necessidade de prefixar com std::

int main() {
    int num1, num2, num3; // Declara��o de tr�s vari�veis inteiras para armazenar os n�meros

    // Solicita ao usu�rio para digitar o primeiro n�mero
    cout << "Digite o primeiro n�mero inteiro: ";
    cin >> num1; // L� o n�mero inteiro digitado pelo usu�rio e armazena em num1

    // Solicita ao usu�rio para digitar o segundo n�mero
    cout << "Digite o segundo n�mero inteiro: ";
    cin >> num2; // L� o n�mero inteiro digitado pelo usu�rio e armazena em num2

    // Solicita ao usu�rio para digitar o terceiro n�mero
    cout << "Digite o terceiro n�mero inteiro: ";
    cin >> num3; // L� o n�mero inteiro digitado pelo usu�rio e armazena em num3

    // Verifica se o primeiro n�mero � menor que o segundo e maior que o terceiro
    if (num1 < num2 && num1 > num3) {
        cout << "O primeiro n�mero � menor que o segundo e maior que o terceiro." << endl; // Se a condi��o for verdadeira
    } else {
        cout << "O primeiro n�mero n�o atende �s condi��es especificadas." << endl; // Se a condi��o n�o for verdadeira
    }

    return 0; // Indica que o programa terminou com sucesso
}

