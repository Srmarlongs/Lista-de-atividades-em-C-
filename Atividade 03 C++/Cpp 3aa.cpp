#include <iostream>
#include <string>  // Incluído para manipulação de strings
using namespace std;

int main() {
    // Variável para armazenar a palavra inserida pelo usuário
    string palavra;

    // Solicitar ao usuário que insira uma palavra
    cout << "Digite uma palavra: ";
    getline(cin, palavra);  // Lê a linha inteira do usuário, incluindo espaços

    // Verificar se a palavra não é vazia
    if (!palavra.empty()) {
        // Se a palavra não for vazia, imprime a mensagem
        cout << "A palavra não é vazia" << endl;
    } else {
        // Caso a palavra seja vazia
        cout << "A palavra está vazia" << endl;
    }

    return 0;
}
