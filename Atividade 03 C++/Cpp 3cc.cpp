#include <iostream>
using namespace std;

int main() {
    // Vari�veis para armazenar os comprimentos dos lados do tri�ngulo
    float lado1, lado2, lado3;

    // Solicitar ao usu�rio que insira os comprimentos dos lados
    cout << "Digite o comprimento do primeiro lado: ";
    cin >> lado1;
    cout << "Digite o comprimento do segundo lado: ";
    cin >> lado2;
    cout << "Digite o comprimento do terceiro lado: ";
    cin >> lado3;

    // Verificar se o tri�ngulo � equil�tero, is�sceles ou escaleno
    if (lado1 == lado2 && lado2 == lado3) {
        cout << "O tri�ngulo � equil�tero." << endl;
    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
        cout << "O tri�ngulo � is�sceles." << endl;
    } else {
        cout << "O tri�ngulo � escaleno." << endl;
    }

    return 0;
}

