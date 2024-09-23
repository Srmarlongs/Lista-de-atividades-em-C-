#include <iostream> // Biblioteca para entrada e sa�da padr�o
#include <cmath>    // Biblioteca para fun��es matem�ticas, como abs()

using namespace std; // Usar o namespace padr�o para evitar a necessidade de prefixar com std::

int main() {
    int num1, num2; // Declara��o de duas vari�veis inteiras para armazenar os n�meros fornecidos pelo usu�rio

    // Solicita ao usu�rio para digitar o primeiro n�mero inteiro
    cout << "Digite o primeiro n�mero inteiro: ";
    cin >> num1; // L� o primeiro n�mero inteiro digitado pelo usu�rio e armazena em num1

    // Solicita ao usu�rio para digitar o segundo n�mero inteiro
    cout << "Digite o segundo n�mero inteiro: ";
    cin >> num2; // L� o segundo n�mero inteiro digitado pelo usu�rio e armazena em num2

    // Calcula a diferen�a absoluta entre os dois n�meros
    int diferenca = abs(num1 - num2);

    // Verifica se a diferen�a � menor ou igual a 10
    if (diferenca <= 10) {
        cout << "A diferen�a entre " << num1 << " e " << num2 << " � menor ou igual a 10." << endl; // Se a condi��o for verdadeira
    } else {
        cout << "A diferen�a entre " << num1 << " e " << num2 << " � maior que 10." << endl; // Se a condi��o n�o for verdadeira
    }

    return 0; // Indica que o programa terminou com sucesso
}

