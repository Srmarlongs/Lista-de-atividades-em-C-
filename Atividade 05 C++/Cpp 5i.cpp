#include <iostream>
using namespace std;

// Função para verificar se um número é primo
bool isPrimo(int num) {
    if (num <= 1) return false; // Números menores ou iguais a 1 não são primos
    if (num == 2) return true;  // 2 é o único número par que é primo
    if (num % 2 == 0) return false; // Números pares maiores que 2 não são primos

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false; // Encontrou um divisor, não é primo
    }

    return true; // Se não encontrou divisores, é primo
}

int main() {
    // Exibe os números primos entre 1 e 100
    cout << "Números primos entre 1 e 100:" << endl;

    for (int i = 1; i <= 100; ++i) {
        if (isPrimo(i)) {
            cout << i << " ";
        }
    }

    cout << endl; // Linha em branco para a formatação

    return 0;
}

