#include <iostream>
using namespace std;

int main() {
    int numero;
    
    // Solicita ao usu�rio para inserir um n�mero inteiro positivo
    cout << "Digite um n�mero inteiro positivo: ";
    cin >> numero;
    
    // Verifica se o n�mero inserido � positivo
    if (numero <= 0) {
        cout << "O n�mero deve ser um inteiro positivo. Programa encerrado." << endl;
        return 1; // Encerra o programa com um c�digo de erro
    }

    // Calcula a soma dos n�meros de 1 at� o n�mero inserido
    int soma = 0;
    for (int i = 1; i <= numero; ++i) {
        soma += i;
    }

    // Exibe a soma
    cout << "A soma de todos os n�meros entre 1 e " << numero << " � " << soma << "." << endl;

    return 0;
}

