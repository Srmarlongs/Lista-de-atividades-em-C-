#include <iostream>
using namespace std;

int main() {
    int opcao;        // Vari�vel para armazenar a op��o escolhida pelo usu�rio
    char continuar;   // Vari�vel para armazenar a escolha do usu�rio para continuar ou finalizar

    do {
        // Exibir o menu para o usu�rio
        cout << "\nMenu - Escolha o Idioma:" << endl;
        cout << "1. Portugu�s" << endl;
        cout << "2. Ingl�s" << endl;
        cout << "Digite o n�mero correspondente ao idioma desejado (1 ou 2): ";
        cin >> opcao;  // L� a op��o escolhida pelo usu�rio

        // Exibir a mensagem de boas-vindas com base na escolha do usu�rio
        switch (opcao) {
            case 1:
                cout << "Bem-vindo ao nosso programa!" << endl;
                break;
            case 2:
                cout << "Welcome to our program!" << endl;
                break;
            default:
                // Caso o usu�rio escolha uma op��o inv�lida
                cout << "Op��o inv�lida. Por favor, escolha 1 para Portugu�s ou 2 para Ingl�s." << endl;
                break;
        }

        // Perguntar ao usu�rio se ele deseja escolher outro idioma ou finalizar
        cout << "\nDeseja escolher outro idioma? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');  // O loop continua enquanto o usu�rio responder 's' ou 'S'

    cout << "Programa encerrado. At� logo!" << endl;

    return 0;
}

