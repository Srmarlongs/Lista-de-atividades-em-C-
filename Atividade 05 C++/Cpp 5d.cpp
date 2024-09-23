#include <iostream>
using namespace std;

int main() {
    int numero;
    
    // Solicita ao usuário para inserir um número inteiro positivo
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;
    
    // Verifica se o número inserido é positivo
    if (numero <= 0) {
        cout << "O número deve ser um inteiro positivo. Programa encerrado." << endl;
        return 1; // Encerra o programa com um código de erro
    }

    // Calcula a soma dos números de 1 até o número inserido
    int soma = 0;
    for (int i = 1; i <= numero; ++i) {
        soma += i;
    }

    // Exibe a soma
    cout << "A soma de todos os números entre 1 e " << numero << " é " << soma << "." << endl;

    return 0;
}

