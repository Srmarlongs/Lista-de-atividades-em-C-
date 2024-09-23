#include <iostream>
#include <iomanip> // Para definir a precisão da saída
using namespace std;

int main() {
    const int TOTAL_NUMEROS = 100; // Define o número total de elementos
    double numeros[TOTAL_NUMEROS]; // Array para armazenar os números
    double soma = 0; // Variável para armazenar a soma dos números
    int cont_igual_30 = 0; // Contador para números iguais a 30
    int cont_maior_media = 0; // Contador para números maiores que a média
    int cont_igual_media = 0; // Contador para números iguais à média

    // Leitura dos números
    cout << "Digite " << TOTAL_NUMEROS << " números reais:" << endl;
    for (int i = 0; i < TOTAL_NUMEROS; ++i) {
        cin >> numeros[i]; // Lê um número e armazena no array
        soma += numeros[i]; // Adiciona o número à soma total
    }

    // Cálculo da média
    double media = soma / TOTAL_NUMEROS; // Calcula a média dos números

    // Contagem das ocorrências
    for (int i = 0; i < TOTAL_NUMEROS; ++i) {
        if (numeros[i] == 30) {
            ++cont_igual_30; // Incrementa o contador se o número for igual a 30
        }
        if (numeros[i] > media) {
            ++cont_maior_media; // Incrementa o contador se o número for maior que a média
        }
        if (numeros[i] == media) {
            ++cont_igual_media; // Incrementa o contador se o número for igual à média
        }
    }

    // Exibição dos resultados
    cout << fixed << setprecision(2); // Define a precisão de exibição dos números reais para 2 casas decimais
    cout << "Número de elementos iguais a 30: " << cont_igual_30 << endl;
    cout << "Número de elementos maiores que a média: " << cont_maior_media << endl;
    cout << "Número de elementos iguais à média: " << cont_igual_media << endl;

    return 0; // Encerra o programa com sucesso
}

