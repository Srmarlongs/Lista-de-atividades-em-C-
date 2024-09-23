#include <iostream>
using namespace std;

int main() {
    int mes;  // Vari�vel para armazenar o n�mero do m�s escolhido pelo usu�rio
    char continuar;  // Vari�vel para armazenar a escolha do usu�rio para continuar ou finalizar

    do {
        // Exibir o menu para o usu�rio
        cout << "\nMenu - Escolha um M�s:" << endl;
        cout << "1. Janeiro" << endl;
        cout << "2. Fevereiro" << endl;
        cout << "3. Mar�o" << endl;
        cout << "4. Abril" << endl;
        cout << "5. Maio" << endl;
        cout << "6. Junho" << endl;
        cout << "7. Julho" << endl;
        cout << "8. Agosto" << endl;
        cout << "9. Setembro" << endl;
        cout << "10. Outubro" << endl;
        cout << "11. Novembro" << endl;
        cout << "12. Dezembro" << endl;
        cout << "Digite o n�mero do m�s desejado (1 a 12): ";
        cin >> mes;  // L� o n�mero do m�s escolhido pelo usu�rio

        // Exibir a quantidade de dias do m�s escolhido
        switch (mes) {
            case 1:  // Janeiro
            case 3:  // Mar�o
            case 5:  // Maio
            case 7:  // Julho
            case 8:  // Agosto
            case 10: // Outubro
            case 12: // Dezembro
                cout << "O m�s escolhido tem 31 dias." << endl;
                break;
            case 4:  // Abril
            case 6:  // Junho
            case 9:  // Setembro
            case 11: // Novembro
                cout << "O m�s escolhido tem 30 dias." << endl;
                break;
            case 2:  // Fevereiro
                cout << "O m�s escolhido tem 28 ou 29 dias, dependendo se � ano bissexto." << endl;
                break;
            default:
                // Caso o usu�rio escolha um n�mero fora do intervalo de meses v�lidos
                cout << "N�mero inv�lido. Por favor, escolha um n�mero entre 1 e 12." << endl;
                break;
        }

        // Perguntar ao usu�rio se ele deseja voltar ao menu ou finalizar
        cout << "\nDeseja consultar outro m�s? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');  // O loop continua enquanto o usu�rio responder 's' ou 'S'

    cout << "Programa encerrado. At� logo!" << endl;

    return 0;
}

