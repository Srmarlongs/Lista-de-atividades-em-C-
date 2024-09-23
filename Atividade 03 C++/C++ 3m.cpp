#include <iostream> // Biblioteca para entrada e saída padrão

using namespace std; // Usar o namespace padrão para evitar a necessidade de prefixar com std::

int main() {
    int mes; // Declaração de uma variável inteira para armazenar a escolha do mês

    // Exibe o menu com as opções de meses do ano
    cout << "Escolha um mês do ano:" << endl;
    cout << "1 - Janeiro" << endl;
    cout << "2 - Fevereiro" << endl;
    cout << "3 - Março" << endl;
    cout << "4 - Abril" << endl;
    cout << "5 - Maio" << endl;
    cout << "6 - Junho" << endl;
    cout << "7 - Julho" << endl;
    cout << "8 - Agosto" << endl;
    cout << "9 - Setembro" << endl;
    cout << "10 - Outubro" << endl;
    cout << "11 - Novembro" << endl;
    cout << "12 - Dezembro" << endl;
    cout << "Digite o número do mês (1 a 12): ";
    cin >> mes; // Lê a escolha do usuário e armazena na variável mes

    // Verifica o mês escolhido e exibe a quantidade de dias
    switch (mes) {
        case 1: // Janeiro
        case 3: // Março
        case 5: // Maio
        case 7: // Julho
        case 8: // Agosto
        case 10: // Outubro
        case 12: // Dezembro
            cout << "O mês escolhido tem 31 dias." << endl;
            break;
        case 4: // Abril
        case 6: // Junho
        case 9: // Setembro
        case 11: // Novembro
            cout << "O mês escolhido tem 30 dias." << endl;
            break;
        case 2: // Fevereiro
            cout << "Fevereiro pode ter 28 ou 29 dias dependendo se é ano bissexto." << endl;
            break;
        default: // Caso o usuário digite um número fora do intervalo 1 a 12
            cout << "Número do mês inválido. Por favor, digite um número entre 1 e 12." << endl;
            break;
    }

    return 0; // Indica que o programa terminou com sucesso
}

