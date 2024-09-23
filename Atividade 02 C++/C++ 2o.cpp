#include <iostream>  // Inclui a biblioteca padr�o de entrada e sa�da
#include <cmath>     // Inclui a biblioteca matem�tica para usar M_PI

using namespace std; // Usa o namespace padr�o para simplificar o c�digo

int main() {
    double raio; // Declara uma vari�vel para armazenar o raio do c�rculo
    double area; // Declara uma vari�vel para armazenar a �rea do c�rculo

    // Solicita ao usu�rio que insira o raio do c�rculo
    cout << "Digite o raio do c�rculo: ";
    cin >> raio; // L� o valor inserido pelo usu�rio e armazena na vari�vel 'raio'

    // Calcula a �rea do c�rculo usando a f�rmula: �rea = p * raio^2
    area = M_PI * raio * raio;

    // Exibe a �rea calculada na tela com duas casas decimais
    cout << "A �rea do c�rculo com raio " << raio << " � " << area << endl;

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

