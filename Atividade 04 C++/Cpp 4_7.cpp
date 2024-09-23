#include <iostream>
using namespace std;

int main() {
    int opcao;        // Variável para armazenar a opção escolhida pelo usuário
    double saldo = 1000.00;  // Inicializa o saldo com um valor fictício
    double valor;     // Variável para armazenar o valor do saque ou depósito
    char continuar;   // Variável para armazenar a escolha do usuário para continuar ou finalizar

    do {
        // Exibir o menu para o usuário
        cout << "\nMenu - Caixa Eletrônico:" << endl;
        cout << "1. Saque" << endl;
        cout << "2. Depósito" << endl;
        cout << "3. Consulta de Saldo" << endl;
        cout << "Digite o número da operação desejada (1 a 3): ";
        cin >> opcao;  // Lê a opção escolhida pelo usuário

        // Realizar a operação com base na escolha do usuário
        switch (opcao) {
            case 1:
                // Saque
                cout << "Digite o valor do saque: R$ ";
                cin >> valor;  // Lê o valor do saque
                if (valor > 0 && valor <= saldo) {
                    saldo -= valor;
                    cout << "Saque realizado com sucesso! Saldo atual: R$ " << saldo << endl;
                } else if (valor <= 0) {
                    cout << "Valor inválido para saque. O valor deve ser positivo." << endl;
                } else {
                    cout << "Saldo insuficiente para realizar o saque." << endl;
                }
                break;
            case 2:
                // Depósito
                cout << "Digite o valor do depósito: R$ ";
                cin >> valor;  // Lê o valor do depósito
                if (valor > 0) {
                    saldo += valor;
                    cout << "Depósito realizado com sucesso! Saldo atual: R$ " << saldo << endl;
                } else {
                    cout << "Valor inválido para depósito. O valor deve ser positivo." << endl;
                }
                break;
            case 3:
                // Consulta de Saldo
                cout << "Saldo atual: R$ " << saldo << endl;
                break;
            default:
                // Caso o usuário escolha uma opção inválida
                cout << "Opção inválida. Por favor, escolha um número entre 1 e 3." << endl;
                break;
        }

        // Perguntar ao usuário se ele deseja realizar outra operação ou finalizar
        cout << "\nDeseja realizar outra operação? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');  // O loop continua enquanto o usuário responder 's' ou 'S'

    cout << "Programa encerrado. Até logo!" << endl;

    return 0;
}

