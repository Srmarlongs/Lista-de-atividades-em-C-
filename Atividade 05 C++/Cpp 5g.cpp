#include <iostream>
using namespace std;

int main() {
    // Loop para iterar sobre os números de 5 a 10
    for (int i = 5; i <= 10; ++i) {
        cout << "Tabuada do " << i << ":" << endl;

        // Loop para calcular e exibir a tabuada do número atual
        for (int j = 1; j <= 10; ++j) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        
        // Linha em branco para separar as tabuadas
        cout << endl;
    }

    return 0;
}

