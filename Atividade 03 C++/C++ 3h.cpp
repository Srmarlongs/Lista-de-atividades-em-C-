#include <iostream> // Biblioteca para entrada e sa�da padr�o

using namespace std; // Usar o namespace padr�o para evitar a necessidade de prefixar com std::

int main() {
    int ano; // Declara��o de uma vari�vel inteira para armazenar o ano fornecido pelo usu�rio

    // Solicita ao usu�rio para digitar um ano
    cout << "Digite um ano: ";
    cin >> ano; // L� o ano digitado pelo usu�rio e armazena na vari�vel ano

    // Verifica se o ano � bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        cout << "O ano " << ano << " � bissexto." << endl; // Se o ano atende �s condi��es para ser bissexto
    } else {
        cout << "O ano " << ano << " n�o � bissexto." << endl; // Se o ano n�o atende �s condi��es para ser bissexto
    }

    return 0; // Indica que o programa terminou com sucesso
}

