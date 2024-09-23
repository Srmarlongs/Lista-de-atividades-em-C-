#include <iostream> // Inclui a biblioteca padr�o para entrada e sa�da

using namespace std; // Usa o namespace padr�o para evitar a necessidade de prefixar std::

int main() { // Fun��o principal que � o ponto de entrada do programa
    
    // Declara uma vari�vel para armazenar o n�mero digitado pelo usu�rio
    double numero;

    // Solicita ao usu�rio para digitar um n�mero
    cout << "Digite um n�mero: ";
    cin >> numero; // L� o n�mero digitado da entrada padr�o e armazena na vari�vel 'numero'

    // Calcula a metade do n�mero
    double  metade = numero / 2;

    // Exibe a metade do n�mero na tela
    cout << "A metade do n�mero �: " << metade << endl;

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

