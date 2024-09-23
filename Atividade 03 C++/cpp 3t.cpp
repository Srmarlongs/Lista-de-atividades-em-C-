#include <iostream>
using namespace std;

int main() {
    // Vari�vel para armazenar o n�mero inserido pelo usu�rio
    int numero;

    // Solicitar ao usu�rio que insira um n�mero inteiro
    cout << "Digite um n�mero inteiro: ";
    cin >> numero;

    // Verificar se o n�mero � divis�vel por 3 ou por 5
    // O operador % � o operador m�dulo que calcula o resto da divis�o
    if (numero % 3 == 0 || numero % 5 == 0) {
        // Se o resto da divis�o por 3 ou por 5 for zero, o n�mero � divis�vel por 3 ou por 5
        cout << "O n�mero � divis�vel por 3 ou por 5!" << endl;
    } else {
        // Se n�o for divis�vel por 3 ou por 5
        cout << "O n�mero n�o � divis�vel por 3 nem por 5." << endl;
    }

    return 0;
}

