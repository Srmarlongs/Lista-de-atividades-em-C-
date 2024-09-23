#include <iostream> // Biblioteca para entrada e sa�da padr�o

using namespace std; // Usar o namespace padr�o para evitar a necessidade de prefixar com std::

int main() {
    int num; // Declara��o de uma vari�vel inteira para armazenar o n�mero fornecido pelo usu�rio

    // Solicita ao usu�rio para digitar um n�mero inteiro
    cout << "Digite um n�mero inteiro: ";
    cin >> num; // L� o n�mero inteiro digitado pelo usu�rio e armazena na vari�vel num

    // Verifica se o n�mero � par
    if (num % 2 == 0) {
        cout << "O n�mero " << num << " � par." << endl; // Se o resto da divis�o por 2 for zero, o n�mero � par
    } else {
        cout << "O n�mero " << num << " � �mpar." << endl; // Se o resto da divis�o por 2 n�o for zero, o n�mero � �mpar
    }

    return 0; // Indica que o programa terminou com sucesso
}

