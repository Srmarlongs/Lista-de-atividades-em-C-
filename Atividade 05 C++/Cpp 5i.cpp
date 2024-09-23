#include <iostream>
using namespace std;

// Fun��o para verificar se um n�mero � primo
bool isPrimo(int num) {
    if (num <= 1) return false; // N�meros menores ou iguais a 1 n�o s�o primos
    if (num == 2) return true;  // 2 � o �nico n�mero par que � primo
    if (num % 2 == 0) return false; // N�meros pares maiores que 2 n�o s�o primos

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false; // Encontrou um divisor, n�o � primo
    }

    return true; // Se n�o encontrou divisores, � primo
}

int main() {
    // Exibe os n�meros primos entre 1 e 100
    cout << "N�meros primos entre 1 e 100:" << endl;

    for (int i = 1; i <= 100; ++i) {
        if (isPrimo(i)) {
            cout << i << " ";
        }
    }

    cout << endl; // Linha em branco para a formata��o

    return 0;
}

