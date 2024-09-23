#include <iostream>
using namespace std;

int main() {
    int opcao;        // Variável para armazenar a opção escolhida pelo usuário
    char continuar;   // Variável para armazenar a escolha do usuário para continuar ou finalizar

    do {
        // Exibir o menu para o usuário
        cout << "\nMenu - Escolha o Idioma:" << endl;
        cout << "1. Português" << endl;
        cout << "2. Inglês" << endl;
        cout << "Digite o número correspondente ao idioma desejado (1 ou 2): ";
        cin >> opcao;  // Lê a opção escolhida pelo usuário

        // Exibir a mensagem de boas-vindas com base na escolha do usuário
        switch (opcao) {
            case 1:
                cout << "Bem-vindo ao nosso programa!" << endl;
                break;
            case 2:
                cout << "Welcome to our program!" << endl;
                break;
            default:
                // Caso o usuário escolha uma opção inválida
                cout << "Opção inválida. Por favor, escolha 1 para Português ou 2 para Inglês." << endl;
                break;
        }

        // Perguntar ao usuário se ele deseja escolher outro idioma ou finalizar
        cout << "\nDeseja escolher outro idioma? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');  // O loop continua enquanto o usuário responder 's' ou 'S'

    cout << "Programa encerrado. Até logo!" << endl;

    return 0;
}

