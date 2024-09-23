#include <iostream>
using namespace std;

int main() {
    int numero;

    // Loop para garantir que o usuário insira um número inteiro positivo
    do {
        // Solicita ao usuário para inserir um número inteiro positivo
        cout << "Digite um número inteiro positivo: ";
        cin >> numero;

        // Verifica se o número é positivo
        if (numero <= 0) {
            cout << "Número inválido. Deve ser um número inteiro positivo." << endl;
        }
    } while (numero <= 0); // Repete até o usuário inserir um número positivo

    // Exibe os números ímpares entre 0 e o número inserido
    cout << "Números ímpares entre 0 e " << numero << ":" << endl;
    for (int i = 1; i <= numero; i += 2) {
        cout << i << " ";
    }
    cout << endl; // Linha em branco para a formatação

    return 0; // Encerra o programa com sucesso
}

