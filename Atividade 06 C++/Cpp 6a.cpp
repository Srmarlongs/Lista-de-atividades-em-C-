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

    int i = 0; // Inicializa o contador

    // Exibe todos os números pares entre 0 e o número inserido
    cout << "Números pares entre 0 e " << numero << ":" << endl;
    
    while (i <= numero) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++; // Incrementa o contador
    }

    cout << endl; // Linha em branco para formatação

    return 0;
}

