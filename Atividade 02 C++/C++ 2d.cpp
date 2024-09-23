#include <iostream> // Inclui a biblioteca padr�o para entrada e sa�da

using namespace std; // Usa o namespace padr�o para evitar a necessidade de prefixar std::

int main() { // Fun��o principal que � o ponto de entrada do programa
    
    // Declara vari�veis para armazenar os dois n�meros e o resultado da divis�o
    double num1, num2, resultado;

    // Solicita ao usu�rio para digitar o primeiro n�mero
    cout << "Digite o primeiro n�mero: ";
    cin >> num1; // L� o primeiro n�mero da entrada padr�o e armazena em num1

    // Solicita ao usu�rio para digitar o segundo n�mero
    cout << "Digite o segundo n�mero: ";
    cin >> num2; // L� o segundo n�mero da entrada padr�o e armazena em num2

    // Verifica se o segundo n�mero � diferente de zero para evitar divis�o por zero
    if (num2 != 0) {
        // Calcula o resultado da divis�o
        resultado = num1 / num2;

        // Exibe o resultado da divis�o na tela
        cout << "O resultado da divis�o �: " << resultado << endl;
    } else {
        // Exibe uma mensagem de erro se o segundo n�mero for zero
        cout << "Erro: Divis�o por zero n�o � permitida." << endl;
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

