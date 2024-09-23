#include <iostream>
using namespace std;

int main() {
    char tamanho;  // Vari�vel para armazenar o tamanho escolhido pelo usu�rio
    double preco;  // Vari�vel para armazenar o pre�o da camiseta
    char continuar;  // Vari�vel para armazenar a escolha do usu�rio para continuar ou finalizar

    do {
        // Exibir o menu para o usu�rio
        cout << "\nMenu - Escolha o Tamanho da Camiseta:" << endl;
        cout << "P. Pequeno" << endl;
        cout << "M. M�dio" << endl;
        cout << "G. Grande" << endl;
        cout << "Digite a letra correspondente ao tamanho desejado (P, M ou G): ";
        cin >> tamanho;  // L� o tamanho escolhido pelo usu�rio

        // Determinar o pre�o com base no tamanho escolhido
        switch (tamanho) {
            case 'P':
            case 'p':
                preco = 19.99;  // Pre�o para camiseta tamanho P
                cout << "Pre�o da camiseta tamanho Pequeno: R$ " << preco << endl;
                break;
            case 'M':
            case 'm':
                preco = 24.99;  // Pre�o para camiseta tamanho M
                cout << "Pre�o da camiseta tamanho M�dio: R$ " << preco << endl;
                break;
            case 'G':
            case 'g':
                preco = 29.99;  // Pre�o para camiseta tamanho G
                cout << "Pre�o da camiseta tamanho Grande: R$ " << preco << endl;
                break;
            default:
                // Caso o usu�rio escolha uma op��o inv�lida
                cout << "Tamanho inv�lido. Por favor, escolha P, M ou G." << endl;
                break;
        }

        // Perguntar ao usu�rio se ele deseja voltar ao menu ou finalizar
        cout << "\nDeseja escolher outro tamanho? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');  // O loop continua enquanto o usu�rio responder 's' ou 'S'

    cout << "Programa encerrado. At� logo!" << endl;

    return 0;
}

