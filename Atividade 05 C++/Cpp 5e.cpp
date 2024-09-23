#include <iostream>
using namespace std;

// Fun��o para verificar se um n�mero � primo
bool isPrimo(int num) {
    // N�meros menores ou iguais a 1 n�o s�o primos
    if (num <= 1) return false;
    // 2 � o �nico n�mero par que � primo
    if (num == 2) return true;
    // N�meros pares maiores que 2 n�o s�o primos
    if (num % 2 == 0) return false;
    
    // Verifica divisores �mpares de 3 at� a raiz quadrada de num
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false; // Encontrou um divisor, n�o � primo
    }
    
    // Se n�o encontrou divisores, � primo
    return true;
}

int main() {
    int numero;
    
    // Solicita ao usu�rio para inserir um n�mero inteiro
    cout << "Digite um n�mero inteiro: ";
    cin >> numero;
    
    // Verifica se o n�mero � primo e exibe o resultado
    if (isPrimo(numero)) {
        cout << numero << " � um n�mero primo." << endl;
    } else {
        cout << numero << " n�o � um n�mero primo." << endl;
    }
    
    return 0;
}

