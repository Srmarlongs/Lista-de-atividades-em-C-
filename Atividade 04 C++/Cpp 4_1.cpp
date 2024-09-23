#include <iostream>
using namespace std;

int main() {
    int opcao;  // Vari�vel para armazenar a op��o escolhida pelo usu�rio

    // Exibir o menu para o usu�rio
    cout << "Menu:" << endl;
    cout << "1. Op��o 1" << endl;
    cout << "2. Op��o 2" << endl;
    cout << "3. Op��o 3" << endl;
    cout << "Digite o n�mero da op��o desejada: ";
    cin >> opcao;  // L� a op��o escolhida pelo usu�rio

    // Processar a op��o escolhida
    switch (opcao) {
        case 1:
            // A��o para a op��o 1
            cout << "Voc� escolheu a Op��o 1." << endl;
            break;
        case 2:
            // A��o para a op��o 2
            cout << "Voc� escolheu a Op��o 2." << endl;
            break;
        case 3:
            // A��o para a op��o 3
            cout << "Voc� escolheu a Op��o 3." << endl;
            break;
        default:
            // Caso o usu�rio escolha uma op��o inv�lida
            cout << "Op��o inv�lida. Por favor, escolha 1, 2 ou 3." << endl;
            break;
    }

    return 0;
}

