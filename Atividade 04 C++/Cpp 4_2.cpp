#include <iostream>
#include <iomanip>  // Para o controle de precisão da divisão
using namespace std;

int main() {
    int opcao;  // Variável para armazenar a opção escolhida pelo usuário
    float num1, num2;  // Variáveis para armazenar os dois números
    float resultado;  // Variável para armazenar o resultado da operação
    char continuar;  // Variável para armazenar a escolha do usuário para continuar ou finalizar

    do {
        // Exibir o menu para o usuário
        cout << "\nMenu de Operações Matemáticas:" << endl;
        cout << "1. Adição" << endl;
        cout << "2. Subtração" << endl;
        cout << "3. Multiplicação" << endl;
        cout << "4. Divisão" << endl;
        cout << "Digite o número da operação desejada: ";
        cin >> opcao;  // Lê a opção escolhida pelo usuário

        // Solicitar os dois números
        cout << "Digite o primeiro número: ";
        cin >> num1;
        cout << "Digite o segundo número: ";
        cin >> num2;

        // Realizar a operação escolhida
        switch (opcao) {
            case 1:
                // Adição
                resultado = num1 + num2;
                cout << "Resultado da adição: " << fixed << setprecision(2) << resultado << endl;
                break;
            case 2:
                // Subtração
                resultado = num1 - num2;
                cout << "Resultado da subtração: " << fixed << setprecision(2) << resultado << endl;
                break;
            case 3:
                // Multiplicação
                resultado = num1 * num2;
                cout << "Resultado da multiplicação: " << fixed << setprecision(2) << resultado << endl;
                break;
            case 4:
                // Divisão
                if (num2 != 0) {
                    resultado = num1 / num2;
                    cout << "Resultado da divisão: " << fixed << setprecision(2) << resultado << endl;
                } else {
                    cout << "Erro: Divisão por zero não é permitida." << endl;
                }
                break;
            default:
                // Caso o usuário escolha uma opção inválida
                cout << "Opção inválida. Por favor, escolha um número entre 1 e 4." << endl;
                break;
        }

        // Perguntar ao usuário se ele deseja voltar ao menu ou finalizar
        cout << "\nDeseja voltar ao menu? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');  // O loop continua enquanto o usuário responder 's' ou 'S'

    cout << "Programa encerrado. Até logo!" << endl;

    return 0;
}

