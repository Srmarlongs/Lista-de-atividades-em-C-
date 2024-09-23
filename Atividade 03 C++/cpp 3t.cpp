#include <iostream>
using namespace std;

int main() {
    // Variável para armazenar o número inserido pelo usuário
    int numero;

    // Solicitar ao usuário que insira um número inteiro
    cout << "Digite um número inteiro: ";
    cin >> numero;

    // Verificar se o número é divisível por 3 ou por 5
    // O operador % é o operador módulo que calcula o resto da divisão
    if (numero % 3 == 0 || numero % 5 == 0) {
        // Se o resto da divisão por 3 ou por 5 for zero, o número é divisível por 3 ou por 5
        cout << "O número é divisível por 3 ou por 5!" << endl;
    } else {
        // Se não for divisível por 3 ou por 5
        cout << "O número não é divisível por 3 nem por 5." << endl;
    }

    return 0;
}

