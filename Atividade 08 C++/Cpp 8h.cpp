#include <iostream>
using namespace std;

int main() {
    const int NUM_MERCADORIAS = 100; // N�mero total de mercadorias
    double precoCompra, precoVenda;
    int lucroMenor10 = 0, lucroEntre10e20 = 0, lucroMaior20 = 0;

    // Loop para ler os pre�os de compra e venda de 100 mercadorias
    for (int i = 0; i < NUM_MERCADORIAS; ++i) {
        cout << "Digite o pre�o de compra da mercadoria " << i + 1 << ": ";
        cin >> precoCompra;
        cout << "Digite o pre�o de venda da mercadoria " << i + 1 << ": ";
        cin >> precoVenda;

        // Verificar se o pre�o de compra � v�lido
        if (precoCompra <= 0) {
            cout << "Pre�o de compra inv�lido. Deve ser maior que 0." << endl;
            return 1; // Encerra o programa com c�digo de erro
        }

        // Calcular o lucro percentual
        double lucroPercentual = ((precoVenda - precoCompra) / precoCompra) * 100;

        // Classificar o lucro percentual e atualizar os contadores
        if (lucroPercentual < 10) {
            lucroMenor10++;
        } else if (lucroPercentual <= 20) {
            lucroEntre10e20++;
        } else {
            lucroMaior20++;
        }
    }

    // Imprimir os resultados
    cout << "N�mero de mercadorias com lucro < 10%: " << lucroMenor10 << endl;
    cout << "N�mero de mercadorias com 10% <= lucro <= 20%: " << lucroEntre10e20 << endl;
    cout << "N�mero de mercadorias com lucro > 20%: " << lucroMaior20 << endl;

    return 0; // Encerra o programa com sucesso
}

