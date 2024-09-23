#include <iostream>
using namespace std;

int main() {
    int mes;  // Variável para armazenar o número do mês escolhido pelo usuário
    char continuar;  // Variável para armazenar a escolha do usuário para continuar ou finalizar

    do {
        // Exibir o menu para o usuário
        cout << "\nMenu - Escolha um Mês:" << endl;
        cout << "1. Janeiro" << endl;
        cout << "2. Fevereiro" << endl;
        cout << "3. Março" << endl;
        cout << "4. Abril" << endl;
        cout << "5. Maio" << endl;
        cout << "6. Junho" << endl;
        cout << "7. Julho" << endl;
        cout << "8. Agosto" << endl;
        cout << "9. Setembro" << endl;
        cout << "10. Outubro" << endl;
        cout << "11. Novembro" << endl;
        cout << "12. Dezembro" << endl;
        cout << "Digite o número do mês desejado (1 a 12): ";
        cin >> mes;  // Lê o número do mês escolhido pelo usuário

        // Exibir a quantidade de dias do mês escolhido
        switch (mes) {
            case 1:  // Janeiro
            case 3:  // Março
            case 5:  // Maio
            case 7:  // Julho
            case 8:  // Agosto
            case 10: // Outubro
            case 12: // Dezembro
                cout << "O mês escolhido tem 31 dias." << endl;
                break;
            case 4:  // Abril
            case 6:  // Junho
            case 9:  // Setembro
            case 11: // Novembro
                cout << "O mês escolhido tem 30 dias." << endl;
                break;
            case 2:  // Fevereiro
                cout << "O mês escolhido tem 28 ou 29 dias, dependendo se é ano bissexto." << endl;
                break;
            default:
                // Caso o usuário escolha um número fora do intervalo de meses válidos
                cout << "Número inválido. Por favor, escolha um número entre 1 e 12." << endl;
                break;
        }

        // Perguntar ao usuário se ele deseja voltar ao menu ou finalizar
        cout << "\nDeseja consultar outro mês? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');  // O loop continua enquanto o usuário responder 's' ou 'S'

    cout << "Programa encerrado. Até logo!" << endl;

    return 0;
}

