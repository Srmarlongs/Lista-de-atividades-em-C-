#include <iostream>
using namespace std;

int main() {
    int opcao;        // Vari�vel para armazenar a op��o escolhida pelo usu�rio
    double saldo = 1000.00;  // Inicializa o saldo com um valor fict�cio
    double valor;     // Vari�vel para armazenar o valor do saque ou dep�sito
    char continuar;   // Vari�vel para armazenar a escolha do usu�rio para continuar ou finalizar

    do {
        // Exibir o menu para o usu�rio
        cout << "\nMenu - Caixa Eletr�nico:" << endl;
        cout << "1. Saque" << endl;
        cout << "2. Dep�sito" << endl;
        cout << "3. Consulta de Saldo" << endl;
        cout << "Digite o n�mero da opera��o desejada (1 a 3): ";
        cin >> opcao;  // L� a op��o escolhida pelo usu�rio

        // Realizar a opera��o com base na escolha do usu�rio
        switch (opcao) {
            case 1:
                // Saque
                cout << "Digite o valor do saque: R$ ";
                cin >> valor;  // L� o valor do saque
                if (valor > 0 && valor <= saldo) {
                    saldo -= valor;
                    cout << "Saque realizado com sucesso! Saldo atual: R$ " << saldo << endl;
                } else if (valor <= 0) {
                    cout << "Valor inv�lido para saque. O valor deve ser positivo." << endl;
                } else {
                    cout << "Saldo insuficiente para realizar o saque." << endl;
                }
                break;
            case 2:
                // Dep�sito
                cout << "Digite o valor do dep�sito: R$ ";
                cin >> valor;  // L� o valor do dep�sito
                if (valor > 0) {
                    saldo += valor;
                    cout << "Dep�sito realizado com sucesso! Saldo atual: R$ " << saldo << endl;
                } else {
                    cout << "Valor inv�lido para dep�sito. O valor deve ser positivo." << endl;
                }
                break;
            case 3:
                // Consulta de Saldo
                cout << "Saldo atual: R$ " << saldo << endl;
                break;
            default:
                // Caso o usu�rio escolha uma op��o inv�lida
                cout << "Op��o inv�lida. Por favor, escolha um n�mero entre 1 e 3." << endl;
                break;
        }

        // Perguntar ao usu�rio se ele deseja realizar outra opera��o ou finalizar
        cout << "\nDeseja realizar outra opera��o? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');  // O loop continua enquanto o usu�rio responder 's' ou 'S'

    cout << "Programa encerrado. At� logo!" << endl;

    return 0;
}

