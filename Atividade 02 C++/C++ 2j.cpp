#include <iostream> // Inclui a biblioteca padr�o para entrada e sa�da

using namespace std; // Usa o namespace padr�o para evitar a necessidade de prefixar std::

int main() { // Fun��o principal que � o ponto de entrada do programa

    // Declara vari�veis para armazenar os tr�s n�meros e a m�dia
    double num1, num2, num3, media;

    // Solicita ao usu�rio para digitar o primeiro n�mero
    cout << "Digite o primeiro n�mero: "; 
    cin >> num1; // L� o primeiro n�mero da entrada padr�o e armazena na vari�vel 'num1'

    // Solicita ao usu�rio para digitar o segundo n�mero
    cout << "Digite o segundo n�mero: "; 
    cin >> num2; // L� o segundo n�mero da entrada padr�o e armazena na vari�vel 'num2'

    // Solicita ao usu�rio para digitar o terceiro n�mero
    cout << "Digite o terceiro n�mero: "; 
    cin >> num3; // L� o terceiro n�mero da entrada padr�o e armazena na vari�vel 'num3'

    // Calcula a m�dia aritm�tica dos tr�s n�meros
    media = (num1 + num2 + num3) / 3;

    // Exibe a m�dia aritm�tica para o usu�rio
    cout << "A m�dia aritm�tica dos tr�s n�meros �: " << media << endl;

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

