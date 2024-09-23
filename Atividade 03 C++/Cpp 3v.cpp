#include <iostream>
#include <string>  // Inclu�do para manipula��o de strings
using namespace std;

int main() {
    // Vari�vel para armazenar o nome do usu�rio
    string nome;

    // Solicitar ao usu�rio que informe seu nome
    cout << "Digite seu nome: ";
    cin >> nome;  // L� o nome do usu�rio

    // Verificar se o nome � 'Wilson' ou 'Gloria'
    if (nome == "Wilson" || nome == "Gloria") {
        // Se o nome for 'Wilson' ou 'Gloria', imprime a mensagem de boas-vindas
        cout << "Ol�, bem-vindo(a) de volta!" << endl;
    } else {
        // Caso o nome n�o seja 'Wilson' nem 'Gloria'
        cout << "Ol�, " << nome << "!" << endl;
    }

    return 0;
}

