#include <iostream> // Biblioteca para entrada e sa�da padr�o

using namespace std; // Usar o namespace padr�o para evitar a necessidade de prefixar com std::

int main() {
    double num1, num2; // Declara��o de duas vari�veis do tipo double para armazenar n�meros reais

    // Solicita ao usu�rio para digitar o primeiro n�mero real
    cout << "Digite o primeiro n�mero real: ";
    cin >> num1; // L� o n�mero real digitado pelo usu�rio e armazena em num1

    // Solicita ao usu�rio para digitar o segundo n�mero real
    cout << "Digite o segundo n�mero real: ";
    cin >> num2; // L� o n�mero real digitado pelo usu�rio e armazena em num2

    // Verifica se o primeiro n�mero � maior ou igual ao segundo n�mero
    if (num1 >= num2) {
        cout << "O primeiro n�mero � maior ou igual ao segundo n�mero." << endl; // Se a condi��o for verdadeira
    } else {
        cout << "O primeiro n�mero � menor que o segundo n�mero." << endl; // Se a condi��o n�o for verdadeira
    }

    return 0; // Indica que o programa terminou com sucesso
}

