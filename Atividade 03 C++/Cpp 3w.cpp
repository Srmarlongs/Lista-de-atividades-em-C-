#include <iostream>
using namespace std;

int main() {
    // Vari�vel para armazenar o n�mero inserido pelo usu�rio
    int numero;

    // Solicitar ao usu�rio que insira um n�mero inteiro
    cout << "Digite um n�mero inteiro: ";
    cin >> numero;  // L� o n�mero inserido pelo usu�rio

    // Verificar se o n�mero � maior do que 10 ou menor do que 0
    if (numero > 10 || numero < 0) {
        // Se o n�mero atender a qualquer uma das condi��es, imprime a mensagem de erro
        cout << "N�mero inv�lido!" << endl;
    } else {
        // Se o n�mero estiver entre 0 e 10 (inclusive)
        cout << "N�mero v�lido." << endl;
    }

    return 0;
}

