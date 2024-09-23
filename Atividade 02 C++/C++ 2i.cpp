#include <iostream> // Inclui a biblioteca para entrada e saída de dados

int main() {
    // Variáveis para armazenar o peso e a altura
    double peso, altura, imc;

    // Solicita ao usuário para inserir o peso
    std::cout << "Digite seu peso em kg: ";
    std::cin >> peso; // Lê o peso inserido pelo usuário

    // Solicita ao usuário para inserir a altura
    std::cout << "Digite sua altura em metros: ";
    std::cin >> altura; // Lê a altura inserida pelo usuário

    // Calcula o Índice de Massa Corporal (IMC)
    imc = peso / (altura * altura); // Calcula o IMC usando a fórmula

    // Exibe o resultado
    std::cout << "Seu Índice de Massa Corporal (IMC) é " << imc << "." << std::endl;

    return 0; // Indica que o programa terminou com sucesso
}

