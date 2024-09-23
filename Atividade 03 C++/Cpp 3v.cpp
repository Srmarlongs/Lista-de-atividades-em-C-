#include <iostream>
#include <string>  // Incluído para manipulação de strings
using namespace std;

int main() {
    // Variável para armazenar o nome do usuário
    string nome;

    // Solicitar ao usuário que informe seu nome
    cout << "Digite seu nome: ";
    cin >> nome;  // Lê o nome do usuário

    // Verificar se o nome é 'Wilson' ou 'Gloria'
    if (nome == "Wilson" || nome == "Gloria") {
        // Se o nome for 'Wilson' ou 'Gloria', imprime a mensagem de boas-vindas
        cout << "Olá, bem-vindo(a) de volta!" << endl;
    } else {
        // Caso o nome não seja 'Wilson' nem 'Gloria'
        cout << "Olá, " << nome << "!" << endl;
    }

    return 0;
}

