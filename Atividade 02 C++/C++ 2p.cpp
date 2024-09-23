#include <iostream>  // Inclui a biblioteca padrão para operações de entrada e saída, como cin e cout
#include <cmath>     // Inclui a biblioteca padrão para funções matemáticas, como M_PI

using namespace std; // Permite usar objetos da biblioteca padrão sem prefixar com std::

double calcularVolumeCilindro(double raio, double altura) { // Função que calcula o volume do cilindro
    // Calcula o volume usando a fórmula: V = p * r^2 * h
    return M_PI * (raio * raio) * altura; // Retorna o volume calculado
}

int main() { // Função principal onde a execução do programa começa
    double raio, altura; // Declaração das variáveis para armazenar o raio e a altura

    // Solicita ao usuário o raio do cilindro
    cout << "Digite o raio do cilindro: ";
    cin >> raio; // Lê o valor inserido pelo usuário e armazena na variável 'raio'

    // Solicita ao usuário a altura do cilindro
    cout << "Digite a altura do cilindro: ";
    cin >> altura; // Lê o valor inserido pelo usuário e armazena na variável 'altura'

    // Verifica se o raio ou a altura são menores ou iguais a zero
    if (raio <= 0 || altura <= 0) {
        // Exibe uma mensagem de erro se o raio ou a altura não forem positivos
        cout << "O raio e a altura devem ser positivos." << endl;
    } else {
        // Calcula o volume do cilindro chamando a função 'calcularVolumeCilindro' com os valores de 'raio' e 'altura'
        double volume = calcularVolumeCilindro(raio, altura);
        // Exibe o volume calculado com uma mensagem ao usuário
        cout << "O volume do cilindro é: " << volume << endl;
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

