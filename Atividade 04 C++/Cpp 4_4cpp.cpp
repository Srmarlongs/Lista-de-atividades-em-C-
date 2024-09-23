#include <iostream>
using namespace std;

int main() {
    int opcao;  // Variável para armazenar a opção escolhida pelo usuário
    char continuar;  // Variável para armazenar a escolha do usuário para continuar ou finalizar

    do {
        // Exibir o menu para o usuário
        cout << "\nMenu - Escolha um Animal:" << endl;
        cout << "1. Cachorro" << endl;
        cout << "2. Gato" << endl;
        cout << "3. Pássaro" << endl;
        cout << "Digite o número do animal desejado (1 a 3): ";
        cin >> opcao;  // Lê a opção escolhida pelo usuário

        // Exibir a mensagem correspondente à escolha do usuário
        switch (opcao) {
            case 1:
                cout << "Você escolheu Cachorro. Os cachorros são conhecidos por sua lealdade e amizade!" << endl;
                break;
            case 2:
                cout << "Você escolheu Gato. Os gatos são conhecidos por sua independência e elegância!" << endl;
                break;
            case 3:
                cout << "Você escolheu Pássaro. Os pássaros são conhecidos por sua liberdade e cantos encantadores!" << endl;
                break;
            default:
                // Caso o usuário escolha uma opção inválida
                cout << "Opção inválida. Por favor, escolha um número entre 1 e 3." << endl;
                break;
        }

        // Perguntar ao usuário se ele deseja voltar ao menu ou finalizar
        cout << "\nDeseja voltar ao menu? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');  // O loop continua enquanto o usuário responder 's' ou 'S'

    cout << "Programa encerrado. Até logo!" << endl;

    return 0;
}

