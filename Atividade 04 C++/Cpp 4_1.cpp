#include <iostream>
using namespace std;

int main() {
    int opcao;  // Variável para armazenar a opção escolhida pelo usuário

    // Exibir o menu para o usuário
    cout << "Menu:" << endl;
    cout << "1. Opção 1" << endl;
    cout << "2. Opção 2" << endl;
    cout << "3. Opção 3" << endl;
    cout << "Digite o número da opção desejada: ";
    cin >> opcao;  // Lê a opção escolhida pelo usuário

    // Processar a opção escolhida
    switch (opcao) {
        case 1:
            // Ação para a opção 1
            cout << "Você escolheu a Opção 1." << endl;
            break;
        case 2:
            // Ação para a opção 2
            cout << "Você escolheu a Opção 2." << endl;
            break;
        case 3:
            // Ação para a opção 3
            cout << "Você escolheu a Opção 3." << endl;
            break;
        default:
            // Caso o usuário escolha uma opção inválida
            cout << "Opção inválida. Por favor, escolha 1, 2 ou 3." << endl;
            break;
    }

    return 0;
}

