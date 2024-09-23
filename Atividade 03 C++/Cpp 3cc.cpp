#include <iostream>
using namespace std;

int main() {
    // Variáveis para armazenar os comprimentos dos lados do triângulo
    float lado1, lado2, lado3;

    // Solicitar ao usuário que insira os comprimentos dos lados
    cout << "Digite o comprimento do primeiro lado: ";
    cin >> lado1;
    cout << "Digite o comprimento do segundo lado: ";
    cin >> lado2;
    cout << "Digite o comprimento do terceiro lado: ";
    cin >> lado3;

    // Verificar se o triângulo é equilátero, isósceles ou escaleno
    if (lado1 == lado2 && lado2 == lado3) {
        cout << "O triângulo é equilátero." << endl;
    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
        cout << "O triângulo é isósceles." << endl;
    } else {
        cout << "O triângulo é escaleno." << endl;
    }

    return 0;
}

