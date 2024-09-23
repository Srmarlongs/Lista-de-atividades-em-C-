#include <iostream>
using namespace std;

int main() {
    int opcao;  // Variável para armazenar a opção escolhida pelo usuário
    char continuar;  // Variável para armazenar a escolha do usuário para continuar ou finalizar

    do {
        // Exibir o menu para o usuário
        cout << "\nMenu - Escolha a Velocidade:" << endl;
        cout << "1. Baixa" << endl;
        cout << "2. Média" << endl;
        cout << "3. Alta" << endl;
        cout << "Digite o número da opção desejada (1 a 3): ";
        cin >> opcao;  // Lê a opção escolhida pelo usuário

        // Exibir a mensagem correspondente à escolha do usuário
        switch (opcao) {
            case 1:
                cout << "Limite de velocidade permitido para vias com velocidade baixa: 30 km/h." << endl;
                break;
            case 2:
                cout << "Limite de velocidade permitido para vias com velocidade média: 60 km/h." << endl;
                break;
            case 3:
                cout << "Limite de velocidade permitido para vias com velocidade alta: 120 km/h." << endl;
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

