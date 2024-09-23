#include <iostream> // Biblioteca para entrada e sa�da padr�o

using namespace std; // Usar o namespace padr�o para evitar a necessidade de prefixar com std::

int main() {
    int num; // Declara��o de uma vari�vel inteira para armazenar o n�mero fornecido pelo usu�rio

    // Solicita ao usu�rio para digitar um n�mero inteiro
    cout << "Digite um n�mero inteiro: ";
    cin >> num; // L� o n�mero inteiro digitado pelo usu�rio e armazena na vari�vel num

    // Verifica se o n�mero � negativo
    if (num < 0) {
        cout << "O n�mero " << num << " � negativo." << endl; // Se o n�mero for menor que zero
    } else {
        cout << "O n�mero " << num << " n�o � negativo." << endl; // Se o n�mero for zero ou positivo
    }

    return 0; // Indica que o programa terminou com sucesso
}

