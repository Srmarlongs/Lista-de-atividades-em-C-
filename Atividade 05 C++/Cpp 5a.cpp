#include <iostream>
using namespace std;

int main() {
    // Exibir os n�meros pares entre 0 e 100
    cout << "N�meros pares entre 0 e 100:" << endl;
    
    for (int i = 0; i <= 100; i += 2) {
        cout << i << " ";
    }

    cout << endl;  // Para terminar a linha ap�s a listagem dos n�meros
    return 0;
}

