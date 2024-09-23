#include <iostream>
using namespace std;

int main() {
    int numero;   // Variável para armazenar o número inserido pelo usuário
    int soma = 0; // Variável para acumular a soma dos números não-negativos

    cout << "Digite números inteiros (digite um número negativo para encerrar):" << endl;

    // Loop que continua solicitando números até que um número negativo seja inserido
    do {
        cout << "Digite um número: ";
        cin >> numero; // Lê o número inserido pelo usuário

        // Adiciona o número à soma se ele for não-negativo
        if (numero >= 0) {
            soma += numero; // Adiciona o número à variável soma
        }
        // Se o número for negativo, o loop será encerrado
    } while (numero >= 0); // Continua o loop enquanto o número inserido for maior ou igual a 0

    // Exibe a soma dos números inseridos (excluindo o número negativo)
    cout << "A soma dos números inseridos é " << soma << "." << endl;

    return 0; // Encerra o programa com sucesso
}

