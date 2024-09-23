#include <iostream>
#include <iomanip>  // Para o controle de precis�o da divis�o
using namespace std;

int main() {
    int opcao;  // Vari�vel para armazenar a op��o escolhida pelo usu�rio
    float num1, num2;  // Vari�veis para armazenar os dois n�meros
    float resultado;  // Vari�vel para armazenar o resultado da opera��o
    char continuar;  // Vari�vel para armazenar a escolha do usu�rio para continuar ou finalizar

    do {
        // Exibir o menu para o usu�rio
        cout << "\nMenu de Opera��es Matem�ticas:" << endl;
        cout << "1. Adi��o" << endl;
        cout << "2. Subtra��o" << endl;
        cout << "3. Multiplica��o" << endl;
        cout << "4. Divis�o" << endl;
        cout << "Digite o n�mero da opera��o desejada: ";
        cin >> opcao;  // L� a op��o escolhida pelo usu�rio

        // Solicitar os dois n�meros
        cout << "Digite o primeiro n�mero: ";
        cin >> num1;
        cout << "Digite o segundo n�mero: ";
        cin >> num2;

        // Realizar a opera��o escolhida
        switch (opcao) {
            case 1:
                // Adi��o
                resultado = num1 + num2;
                cout << "Resultado da adi��o: " << fixed << setprecision(2) << resultado << endl;
                break;
            case 2:
                // Subtra��o
                resultado = num1 - num2;
                cout << "Resultado da subtra��o: " << fixed << setprecision(2) << resultado << endl;
                break;
            case 3:
                // Multiplica��o
                resultado = num1 * num2;
                cout << "Resultado da multiplica��o: " << fixed << setprecision(2) << resultado << endl;
                break;
            case 4:
                // Divis�o
                if (num2 != 0) {
                    resultado = num1 / num2;
                    cout << "Resultado da divis�o: " << fixed << setprecision(2) << resultado << endl;
                } else {
                    cout << "Erro: Divis�o por zero n�o � permitida." << endl;
                }
                break;
            default:
                // Caso o usu�rio escolha uma op��o inv�lida
                cout << "Op��o inv�lida. Por favor, escolha um n�mero entre 1 e 4." << endl;
                break;
        }

        // Perguntar ao usu�rio se ele deseja voltar ao menu ou finalizar
        cout << "\nDeseja voltar ao menu? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');  // O loop continua enquanto o usu�rio responder 's' ou 'S'

    cout << "Programa encerrado. At� logo!" << endl;

    return 0;
}

