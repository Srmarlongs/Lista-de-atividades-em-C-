#include <iostream>
#include <string>  // Inclui a biblioteca para manipulação de strings
using namespace std;

int main() {
    string palavra;  // Variável para armazenar a palavra inserida pelo usuário

    // Solicitar ao usuário para inserir uma palavra
    cout << "Digite uma palavra: ";
    cin >> palavra;

    // Exibir cada letra da palavra em uma linha separada
    cout << "Cada letra da palavra em uma linha separada:" << endl;
    for (size_t i = 0; i < palavra.length(); ++i) {
        cout << palavra[i] << endl;
    }

    return 0;
}

