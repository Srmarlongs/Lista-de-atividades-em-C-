#include <iostream>
#include <string>  // Inclu�do para manipula��o de strings
using namespace std;

int main() {
    // Vari�vel para armazenar a palavra inserida pelo usu�rio
    string palavra;

    // Solicitar ao usu�rio que insira uma palavra
    cout << "Digite uma palavra: ";
    getline(cin, palavra);  // L� a linha inteira do usu�rio, incluindo espa�os

    // Verificar se a palavra n�o � vazia
    if (!palavra.empty()) {
        // Se a palavra n�o for vazia, imprime a mensagem
        cout << "A palavra n�o � vazia" << endl;
    } else {
        // Caso a palavra seja vazia
        cout << "A palavra est� vazia" << endl;
    }

    return 0;
}
