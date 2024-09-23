#include <iostream> // Biblioteca para entrada e sa�da padr�o

using namespace std; // Usar o namespace padr�o para evitar a necessidade de prefixar com std::

int main() {
    int mes; // Declara��o de uma vari�vel inteira para armazenar a escolha do m�s

    // Exibe o menu com as op��es de meses do ano
    cout << "Escolha um m�s do ano:" << endl;
    cout << "1 - Janeiro" << endl;
    cout << "2 - Fevereiro" << endl;
    cout << "3 - Mar�o" << endl;
    cout << "4 - Abril" << endl;
    cout << "5 - Maio" << endl;
    cout << "6 - Junho" << endl;
    cout << "7 - Julho" << endl;
    cout << "8 - Agosto" << endl;
    cout << "9 - Setembro" << endl;
    cout << "10 - Outubro" << endl;
    cout << "11 - Novembro" << endl;
    cout << "12 - Dezembro" << endl;
    cout << "Digite o n�mero do m�s (1 a 12): ";
    cin >> mes; // L� a escolha do usu�rio e armazena na vari�vel mes

    // Verifica o m�s escolhido e exibe a quantidade de dias
    switch (mes) {
        case 1: // Janeiro
        case 3: // Mar�o
        case 5: // Maio
        case 7: // Julho
        case 8: // Agosto
        case 10: // Outubro
        case 12: // Dezembro
            cout << "O m�s escolhido tem 31 dias." << endl;
            break;
        case 4: // Abril
        case 6: // Junho
        case 9: // Setembro
        case 11: // Novembro
            cout << "O m�s escolhido tem 30 dias." << endl;
            break;
        case 2: // Fevereiro
            cout << "Fevereiro pode ter 28 ou 29 dias dependendo se � ano bissexto." << endl;
            break;
        default: // Caso o usu�rio digite um n�mero fora do intervalo 1 a 12
            cout << "N�mero do m�s inv�lido. Por favor, digite um n�mero entre 1 e 12." << endl;
            break;
    }

    return 0; // Indica que o programa terminou com sucesso
}

