#include <iostream>
using namespace std;

int main() {
    int opcao;  // Vari�vel para armazenar a op��o escolhida pelo usu�rio
    char continuar;  // Vari�vel para armazenar a escolha do usu�rio para continuar ou finalizar

    do {
        // Exibir o menu para o usu�rio
        cout << "\nMenu - Escolha um Animal:" << endl;
        cout << "1. Cachorro" << endl;
        cout << "2. Gato" << endl;
        cout << "3. P�ssaro" << endl;
        cout << "Digite o n�mero do animal desejado (1 a 3): ";
        cin >> opcao;  // L� a op��o escolhida pelo usu�rio

        // Exibir a mensagem correspondente � escolha do usu�rio
        switch (opcao) {
            case 1:
                cout << "Voc� escolheu Cachorro. Os cachorros s�o conhecidos por sua lealdade e amizade!" << endl;
                break;
            case 2:
                cout << "Voc� escolheu Gato. Os gatos s�o conhecidos por sua independ�ncia e eleg�ncia!" << endl;
                break;
            case 3:
                cout << "Voc� escolheu P�ssaro. Os p�ssaros s�o conhecidos por sua liberdade e cantos encantadores!" << endl;
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

