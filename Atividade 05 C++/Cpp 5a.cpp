#include <iostream>
using namespace std;

int main() {
    // Exibir os números pares entre 0 e 100
    cout << "Números pares entre 0 e 100:" << endl;
    
    for (int i = 0; i <= 100; i += 2) {
        cout << i << " ";
    }

    cout << endl;  // Para terminar a linha após a listagem dos números
    return 0;
}

