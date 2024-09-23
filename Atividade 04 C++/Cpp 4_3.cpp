#include <iostream>
using namespace std;

int main() {
    int opcao;  // Vari�vel para armazenar a op��o escolhida pelo usu�rio
    bool diaUtil;  // Vari�vel para determinar se o dia � �til ou final de semana

    do {
        // Exibir o menu para o usu�rio
        cout << "\nMenu - Dias da Semana:" << endl;
        cout << "1. Domingo" << endl;
        cout << "2. Segunda-feira" << endl;
        cout << "3. Ter�a-feira" << endl;
        cout << "4. Quarta-feira" << endl;
        cout << "5. Quinta-feira" << endl;
        cout << "6. Sexta-feira" << endl;
        cout << "7. S�bado" << endl;
        cout << "Digite o n�mero do dia desejado (1 a 7): ";
        cin >> opcao;  // L� a op��o escolhida pelo usu�rio

        // Verificar se a op��o est� dentro do intervalo v�lido
        if (opcao >= 1 && opcao <= 7) {
            // Determinar se o dia � �til ou final de semana
            switch (opcao) {
                case 1:
                case 7:
                    // Domingo e S�bado s�o finais de semana
                    cout << "O dia escolhido � um final de semana." << endl;
                    break;
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                    // Segunda a Sexta-feira s�o dias �teis
                    cout << "O dia escolhido � um dia �til." << endl;
                    break;
                default:
                    // Este bloco n�o ser� alcan�ado devido � verifica��o anterior
                    cout << "Op��o inv�lida." << endl;
                    break;
            }
        } else {
            cout << "Op��o inv�lida. Por favor, escolha um n�mero entre 1 e 7." << endl;
        }

        // Perguntar ao usu�rio se ele deseja voltar ao menu ou finalizar
        cout << "\nDeseja voltar ao menu? (s/n): ";
        cin >> opcao;

    } while (opcao == 's' || opcao == 'S');  // O loop continua enquanto o usu�rio responder 's' ou 'S'

    cout << "Programa encerrado. At� logo!" << endl;

    return 0;
}

