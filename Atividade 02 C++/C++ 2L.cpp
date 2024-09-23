#include <iostream> // Inclui a biblioteca padrão para operações de entrada e saída
#include <iomanip>  // Inclui a biblioteca para manipulação de formatos de saída, como setprecision

using namespace std; // Permite usar objetos da biblioteca padrão sem prefixar com std::

int main() {
    double peso, altura; // Declaração das variáveis para armazenar o peso e a altura

    // Solicita ao usuário para digitar o peso
    cout << "Digite seu peso (em kg): ";
    cin >> peso; // Lê o valor do peso inserido pelo usuário

    // Solicita ao usuário para digitar a altura
    cout << "Digite sua altura (em metros): ";
    cin >> altura; // Lê o valor da altura inserido pelo usuário

    // Verifica se a altura é maior que zero para evitar divisão por zero
    if (altura <= 0) {
        cout << "A altura deve ser maior que zero." << endl;
        return 1; // Retorna 1 para indicar que houve um erro
    }

    // Calcula o Índice de Massa Corporal (IMC) usando a fórmula
    double imc = peso / (altura * altura);

    // Exibe o resultado do IMC formatado com duas casas decimais
    cout << fixed << setprecision(2); // Define a precisão para duas casas decimais
    cout << "Seu Índice de Massa Corporal (IMC) é: " << imc << endl;

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

