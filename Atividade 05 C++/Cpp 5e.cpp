#include <iostream>
using namespace std;

// Função para verificar se um número é primo
bool isPrimo(int num) {
    // Números menores ou iguais a 1 não são primos
    if (num <= 1) return false;
    // 2 é o único número par que é primo
    if (num == 2) return true;
    // Números pares maiores que 2 não são primos
    if (num % 2 == 0) return false;
    
    // Verifica divisores ímpares de 3 até a raiz quadrada de num
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false; // Encontrou um divisor, não é primo
    }
    
    // Se não encontrou divisores, é primo
    return true;
}

int main() {
    int numero;
    
    // Solicita ao usuário para inserir um número inteiro
    cout << "Digite um número inteiro: ";
    cin >> numero;
    
    // Verifica se o número é primo e exibe o resultado
    if (isPrimo(numero)) {
        cout << numero << " é um número primo." << endl;
    } else {
        cout << numero << " não é um número primo." << endl;
    }
    
    return 0;
}

