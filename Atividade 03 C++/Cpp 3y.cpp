#include <iostream>
using namespace std;

int main() {
    // Vari�vel para armazenar o n�mero inserido pelo usu�rio
    int numero;

    // Solicitar ao usu�rio que insira um n�mero
    cout << "Digite um n�mero: ";
    cin >> numero;  // L� o n�mero inserido pelo usu�rio

    // Verificar se o n�mero � diferente de zero
    if (numero != 0) {
        // Se o n�mero n�o for igual a zero, imprime a mensagem
        cout << "O n�mero � diferente de zero" << endl;
    }

    return 0;
}

