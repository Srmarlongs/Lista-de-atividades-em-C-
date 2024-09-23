#include <iostream> // Biblioteca para entrada e sa�da padr�o

using namespace std; // Usar o namespace padr�o para evitar a necessidade de prefixar com std::

int main() {
    int num1, num2; // Declara��o de duas vari�veis inteiras para armazenar os n�meros

    // Solicita ao usu�rio para digitar o primeiro n�mero
    cout << "Digite o primeiro n�mero inteiro: ";
    cin >> num1; // L� o n�mero inteiro digitado pelo usu�rio e armazena em num1

    // Solicita ao usu�rio para digitar o segundo n�mero
    cout << "Digite o segundo n�mero inteiro: ";
    cin >> num2; // L� o n�mero inteiro digitado pelo usu�rio e armazena em num2

    // Compara os dois n�meros e exibe se s�o iguais ou n�o
    if (num1 == num2) {
        cout << "Os n�meros s�o iguais." << endl; // Se os n�meros forem iguais
    } else {
        cout << "Os n�meros s�o diferentes." << endl; // Se os n�meros forem diferentes
    }

    return 0; // Indica que o programa terminou com sucesso
}

