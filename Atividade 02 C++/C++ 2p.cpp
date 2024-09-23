#include <iostream>  // Inclui a biblioteca padr�o para opera��es de entrada e sa�da, como cin e cout
#include <cmath>     // Inclui a biblioteca padr�o para fun��es matem�ticas, como M_PI

using namespace std; // Permite usar objetos da biblioteca padr�o sem prefixar com std::

double calcularVolumeCilindro(double raio, double altura) { // Fun��o que calcula o volume do cilindro
    // Calcula o volume usando a f�rmula: V = p * r^2 * h
    return M_PI * (raio * raio) * altura; // Retorna o volume calculado
}

int main() { // Fun��o principal onde a execu��o do programa come�a
    double raio, altura; // Declara��o das vari�veis para armazenar o raio e a altura

    // Solicita ao usu�rio o raio do cilindro
    cout << "Digite o raio do cilindro: ";
    cin >> raio; // L� o valor inserido pelo usu�rio e armazena na vari�vel 'raio'

    // Solicita ao usu�rio a altura do cilindro
    cout << "Digite a altura do cilindro: ";
    cin >> altura; // L� o valor inserido pelo usu�rio e armazena na vari�vel 'altura'

    // Verifica se o raio ou a altura s�o menores ou iguais a zero
    if (raio <= 0 || altura <= 0) {
        // Exibe uma mensagem de erro se o raio ou a altura n�o forem positivos
        cout << "O raio e a altura devem ser positivos." << endl;
    } else {
        // Calcula o volume do cilindro chamando a fun��o 'calcularVolumeCilindro' com os valores de 'raio' e 'altura'
        double volume = calcularVolumeCilindro(raio, altura);
        // Exibe o volume calculado com uma mensagem ao usu�rio
        cout << "O volume do cilindro �: " << volume << endl;
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

