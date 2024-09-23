#include <iostream>
using namespace std;

int main() {
    int numero;  // Variável para armazenar o número inserido pelo usuário

    // Solicitar ao usuário para inserir um número inteiro positivo
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    // Verificar se o número inserido é positivo
    if (numero < 0) {
        cout << "O número deve ser positivo." << endl;
    } else {
        // Exibir todos os números pares entre 0 e o número inserido
        cout << "Números pares entre 0 e " << numero << ":" << endl;
        
        // Ajustar o valor de `numero` para incluir o próprio número se for par
        for (int i = 0; i <= numero; i += 2) {
            cout << i << " ";
        }

        cout << endl;  // Para terminar a linha após a listagem dos números
    }

    return 0;
}

