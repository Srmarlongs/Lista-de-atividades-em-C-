#include <iostream> // Inclui a biblioteca para entrada e sa�da de dados

int main() {
    // Vari�veis para armazenar o peso e a altura
    double peso, altura, imc;

    // Solicita ao usu�rio para inserir o peso
    std::cout << "Digite seu peso em kg: ";
    std::cin >> peso; // L� o peso inserido pelo usu�rio

    // Solicita ao usu�rio para inserir a altura
    std::cout << "Digite sua altura em metros: ";
    std::cin >> altura; // L� a altura inserida pelo usu�rio

    // Calcula o �ndice de Massa Corporal (IMC)
    imc = peso / (altura * altura); // Calcula o IMC usando a f�rmula

    // Exibe o resultado
    std::cout << "Seu �ndice de Massa Corporal (IMC) � " << imc << "." << std::endl;

    return 0; // Indica que o programa terminou com sucesso
}

