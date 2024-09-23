#include <iostream>
using namespace std;

int main() {
    // Variável para armazenar o número inserido pelo usuário
    int numero;

    // Solicitar ao usuário que insira um número
    cout << "Digite um número: ";
    cin >> numero;  // Lê o número inserido pelo usuário

    // Verificar se o número é diferente de zero
    if (numero != 0) {
        // Se o número não for igual a zero, imprime a mensagem
        cout << "O número é diferente de zero" << endl;
    }

    return 0;
}

