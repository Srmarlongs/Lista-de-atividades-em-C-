#include <iostream>
using namespace std;

int main() {
    int opcao;  // Vari�vel para armazenar a op��o escolhida pelo usu�rio
    char continuar;  // Vari�vel para armazenar a escolha do usu�rio para continuar ou finalizar

    do {
        // Exibir o menu para o usu�rio
        cout << "\nMenu - Escolha a Velocidade:" << endl;
        cout << "1. Baixa" << endl;
        cout << "2. M�dia" << endl;
        cout << "3. Alta" << endl;
        cout << "Digite o n�mero da op��o desejada (1 a 3): ";
        cin >> opcao;  // L� a op��o escolhida pelo usu�rio

        // Exibir a mensagem correspondente � escolha do usu�rio
        switch (opcao) {
            case 1:
                cout << "Limite de velocidade permitido para vias com velocidade baixa: 30 km/h." << endl;
                break;
            case 2:
                cout << "Limite de velocidade permitido para vias com velocidade m�dia: 60 km/h." << endl;
                break;
            case 3:
                cout << "Limite de velocidade permitido para vias com velocidade alta: 120 km/h." << endl;
                break;
            default:
                // Caso o usu�rio escolha uma op��o inv�lida
                cout << "Op��o inv�lida. Por favor, escolha um n�mero entre 1 e 3." << endl;
                break;
        }

        // Perguntar ao usu�rio se ele deseja voltar ao menu ou finalizar
        cout << "\nDeseja voltar ao menu? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');  // O loop continua enquanto o usu�rio responder 's' ou 'S'

    cout << "Programa encerrado. At� logo!" << endl;

    return 0;
}

