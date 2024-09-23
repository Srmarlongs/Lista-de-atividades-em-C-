#include <iostream>
#include <algorithm> // Para a fun��o sort
#include <string>    // Para a classe string
using namespace std;

int main() {
    // Defini��o e inicializa��o do vetor de nomes
    string nomes[5] = {"Maria", "Jo�o", "Ana", "Pedro", "Lucas"};

    // Ordena o vetor de nomes em ordem alfab�tica
    sort(nomes, nomes + 5);

    // Exibe a lista de nomes ordenada
    cout << "Lista de nomes em ordem alfab�tica:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << nomes[i] << endl;
    }

    return 0; // Encerra o programa com sucesso
}

