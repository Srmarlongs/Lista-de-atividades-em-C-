#include <iostream>
#include <string>

using namespace std;

int main() {
    // Solicita ao usu�rio para digitar seu nome e idade
    string nome;
    int idade;

    cout << "Digite seu nome: ";
    getline(cin, nome); // Usamos getline para permitir espa�os no nome

    cout << "Digite sua idade: ";
    cin >> idade;

    // Exibe as informa��es na tela
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;

    return 0;
}

