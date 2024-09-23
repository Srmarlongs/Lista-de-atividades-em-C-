#include <iostream>  // Inclui a biblioteca padrão de entrada e saída
#include <cmath>     // Inclui a biblioteca matemática para usar M_PI

using namespace std; // Usa o namespace padrão para simplificar o código

int main() {
    double raio; // Declara uma variável para armazenar o raio do círculo
    double area; // Declara uma variável para armazenar a área do círculo

    // Solicita ao usuário que insira o raio do círculo
    cout << "Digite o raio do círculo: ";
    cin >> raio; // Lê o valor inserido pelo usuário e armazena na variável 'raio'

    // Calcula a área do círculo usando a fórmula: área = p * raio^2
    area = M_PI * raio * raio;

    // Exibe a área calculada na tela com duas casas decimais
    cout << "A área do círculo com raio " << raio << " é " << area << endl;

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

