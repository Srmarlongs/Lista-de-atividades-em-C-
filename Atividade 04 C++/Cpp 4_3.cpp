#include <iostream>
using namespace std;

int main() {
    int opcao;  // Variável para armazenar a opção escolhida pelo usuário
    bool diaUtil;  // Variável para determinar se o dia é útil ou final de semana

    do {
        // Exibir o menu para o usuário
        cout << "\nMenu - Dias da Semana:" << endl;
        cout << "1. Domingo" << endl;
        cout << "2. Segunda-feira" << endl;
        cout << "3. Terça-feira" << endl;
        cout << "4. Quarta-feira" << endl;
        cout << "5. Quinta-feira" << endl;
        cout << "6. Sexta-feira" << endl;
        cout << "7. Sábado" << endl;
        cout << "Digite o número do dia desejado (1 a 7): ";
        cin >> opcao;  // Lê a opção escolhida pelo usuário

        // Verificar se a opção está dentro do intervalo válido
        if (opcao >= 1 && opcao <= 7) {
            // Determinar se o dia é útil ou final de semana
            switch (opcao) {
                case 1:
                case 7:
                    // Domingo e Sábado são finais de semana
                    cout << "O dia escolhido é um final de semana." << endl;
                    break;
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                    // Segunda a Sexta-feira são dias úteis
                    cout << "O dia escolhido é um dia útil." << endl;
                    break;
                default:
                    // Este bloco não será alcançado devido à verificação anterior
                    cout << "Opção inválida." << endl;
                    break;
            }
        } else {
            cout << "Opção inválida. Por favor, escolha um número entre 1 e 7." << endl;
        }

        // Perguntar ao usuário se ele deseja voltar ao menu ou finalizar
        cout << "\nDeseja voltar ao menu? (s/n): ";
        cin >> opcao;

    } while (opcao == 's' || opcao == 'S');  // O loop continua enquanto o usuário responder 's' ou 'S'

    cout << "Programa encerrado. Até logo!" << endl;

    return 0;
}

