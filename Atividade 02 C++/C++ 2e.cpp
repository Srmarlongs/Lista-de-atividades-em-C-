#include <iostream> // Inclui a biblioteca padr�o para entrada e sa�da
#include <cmath>    // Inclui a biblioteca para fun��es matem�ticas, como sqrt()

using namespace std; // Usa o namespace padr�o para evitar a necessidade de prefixar std::

int main() { // Fun��o principal que � o ponto de entrada do programa
    
    // Declara uma vari�vel para armazenar o n�mero digitado pelo usu�rio
    double numero;

    // Solicita ao usu�rio para digitar um n�mero
    cout << "Digite um n�mero: ";
    cin >> numero; // L� o n�mero digitado da entrada padr�o e armazena na vari�vel 'numero'

    // Verifica se o n�mero � n�o-negativo, pois a raiz quadrada de n�meros negativos n�o � definida no conjunto dos n�meros reais
    if (numero >= 0) {
        // Calcula a raiz quadrada do n�mero
        double raizQuadrada = sqrt(numero);

        // Exibe a raiz quadrada do n�mero na tela
        cout << "A raiz quadrada do n�mero �: " << raizQuadrada << endl;
    } else {
        // Exibe uma mensagem de erro se o n�mero for negativo
        cout << "Erro: N�o � poss�vel calcular a raiz quadrada de um n�mero negativo." << endl;
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

