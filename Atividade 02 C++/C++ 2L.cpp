#include <iostream> // Inclui a biblioteca padr�o para opera��es de entrada e sa�da
#include <iomanip>  // Inclui a biblioteca para manipula��o de formatos de sa�da, como setprecision

using namespace std; // Permite usar objetos da biblioteca padr�o sem prefixar com std::

int main() {
    double peso, altura; // Declara��o das vari�veis para armazenar o peso e a altura

    // Solicita ao usu�rio para digitar o peso
    cout << "Digite seu peso (em kg): ";
    cin >> peso; // L� o valor do peso inserido pelo usu�rio

    // Solicita ao usu�rio para digitar a altura
    cout << "Digite sua altura (em metros): ";
    cin >> altura; // L� o valor da altura inserido pelo usu�rio

    // Verifica se a altura � maior que zero para evitar divis�o por zero
    if (altura <= 0) {
        cout << "A altura deve ser maior que zero." << endl;
        return 1; // Retorna 1 para indicar que houve um erro
    }

    // Calcula o �ndice de Massa Corporal (IMC) usando a f�rmula
    double imc = peso / (altura * altura);

    // Exibe o resultado do IMC formatado com duas casas decimais
    cout << fixed << setprecision(2); // Define a precis�o para duas casas decimais
    cout << "Seu �ndice de Massa Corporal (IMC) �: " << imc << endl;

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

