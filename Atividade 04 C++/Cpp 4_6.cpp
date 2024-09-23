#include <iostream>
using namespace std;

int main() {
    char tamanho;  // Variável para armazenar o tamanho escolhido pelo usuário
    double preco;  // Variável para armazenar o preço da camiseta
    char continuar;  // Variável para armazenar a escolha do usuário para continuar ou finalizar

    do {
        // Exibir o menu para o usuário
        cout << "\nMenu - Escolha o Tamanho da Camiseta:" << endl;
        cout << "P. Pequeno" << endl;
        cout << "M. Médio" << endl;
        cout << "G. Grande" << endl;
        cout << "Digite a letra correspondente ao tamanho desejado (P, M ou G): ";
        cin >> tamanho;  // Lê o tamanho escolhido pelo usuário

        // Determinar o preço com base no tamanho escolhido
        switch (tamanho) {
            case 'P':
            case 'p':
                preco = 19.99;  // Preço para camiseta tamanho P
                cout << "Preço da camiseta tamanho Pequeno: R$ " << preco << endl;
                break;
            case 'M':
            case 'm':
                preco = 24.99;  // Preço para camiseta tamanho M
                cout << "Preço da camiseta tamanho Médio: R$ " << preco << endl;
                break;
            case 'G':
            case 'g':
                preco = 29.99;  // Preço para camiseta tamanho G
                cout << "Preço da camiseta tamanho Grande: R$ " << preco << endl;
                break;
            default:
                // Caso o usuário escolha uma opção inválida
                cout << "Tamanho inválido. Por favor, escolha P, M ou G." << endl;
                break;
        }

        // Perguntar ao usuário se ele deseja voltar ao menu ou finalizar
        cout << "\nDeseja escolher outro tamanho? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');  // O loop continua enquanto o usuário responder 's' ou 'S'

    cout << "Programa encerrado. Até logo!" << endl;

    return 0;
}

