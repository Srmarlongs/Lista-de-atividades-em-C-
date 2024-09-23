#include <iostream> // Inclui a biblioteca padr�o para opera��es de entrada e sa�da

using namespace std; // Permite usar objetos da biblioteca padr�o sem prefixar com std::

int main() {
    int numero1, numero2; // Declara��o das vari�veis para armazenar os dois n�meros inteiros

    // Solicita ao usu�rio para digitar o primeiro n�mero
    cout << "Digite o primeiro n�mero inteiro: ";
    cin >> numero1; // L� o valor do primeiro n�mero inserido pelo usu�rio

    // Solicita ao usu�rio para digitar o segundo n�mero
    cout << "Digite o segundo n�mero inteiro: ";
    cin >> numero2; // L� o valor do segundo n�mero inserido pelo usu�rio

    // Verifica se o primeiro n�mero � menor que o segundo
    if (numero1 < numero2) {
        // Exibe uma mensagem se o primeiro n�mero for menor que o segundo
        cout << "O primeiro n�mero (" << numero1 << ") � menor que o segundo n�mero (" << numero2 << ")." << endl;
    } else {
        // Exibe uma mensagem se o primeiro n�mero n�o for menor que o segundo
        cout << "O primeiro n�mero (" << numero1 << ") n�o � menor que o segundo n�mero (" << numero2 << ")." << endl;
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

