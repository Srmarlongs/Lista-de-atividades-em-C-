#include <iostream>
#include <iomanip> // Para definir a precis�o da sa�da
using namespace std;

int main() {
    const int TOTAL_NUMEROS = 100; // Define o n�mero total de elementos
    double numeros[TOTAL_NUMEROS]; // Array para armazenar os n�meros
    double soma = 0; // Vari�vel para armazenar a soma dos n�meros
    int cont_igual_30 = 0; // Contador para n�meros iguais a 30
    int cont_maior_media = 0; // Contador para n�meros maiores que a m�dia
    int cont_igual_media = 0; // Contador para n�meros iguais � m�dia

    // Leitura dos n�meros
    cout << "Digite " << TOTAL_NUMEROS << " n�meros reais:" << endl;
    for (int i = 0; i < TOTAL_NUMEROS; ++i) {
        cin >> numeros[i]; // L� um n�mero e armazena no array
        soma += numeros[i]; // Adiciona o n�mero � soma total
    }

    // C�lculo da m�dia
    double media = soma / TOTAL_NUMEROS; // Calcula a m�dia dos n�meros

    // Contagem das ocorr�ncias
    for (int i = 0; i < TOTAL_NUMEROS; ++i) {
        if (numeros[i] == 30) {
            ++cont_igual_30; // Incrementa o contador se o n�mero for igual a 30
        }
        if (numeros[i] > media) {
            ++cont_maior_media; // Incrementa o contador se o n�mero for maior que a m�dia
        }
        if (numeros[i] == media) {
            ++cont_igual_media; // Incrementa o contador se o n�mero for igual � m�dia
        }
    }

    // Exibi��o dos resultados
    cout << fixed << setprecision(2); // Define a precis�o de exibi��o dos n�meros reais para 2 casas decimais
    cout << "N�mero de elementos iguais a 30: " << cont_igual_30 << endl;
    cout << "N�mero de elementos maiores que a m�dia: " << cont_maior_media << endl;
    cout << "N�mero de elementos iguais � m�dia: " << cont_igual_media << endl;

    return 0; // Encerra o programa com sucesso
}

