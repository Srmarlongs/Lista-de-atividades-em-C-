#include <iostream>
using namespace std;

int main() {
    // Variável para armazenar o número inserido pelo usuário
    int numero;

    // Solicitar ao usuário que insira um número inteiro
    cout << "Digite um número inteiro: ";
    cin >> numero;  // Lê o número inserido pelo usuário

    // Verificar se o número é maior do que 10 ou menor do que 0
    if (numero > 10 || numero < 0) {
        // Se o número atender a qualquer uma das condições, imprime a mensagem de erro
        cout << "Número inválido!" << endl;
    } else {
        // Se o número estiver entre 0 e 10 (inclusive)
        cout << "Número válido." << endl;
    }

    return 0;
}

