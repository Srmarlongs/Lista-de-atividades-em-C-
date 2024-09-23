#include <iostream>
#include <algorithm> // Para a função sort
#include <string>    // Para a classe string
using namespace std;

int main() {
    // Definição e inicialização do vetor de nomes
    string nomes[5] = {"Maria", "João", "Ana", "Pedro", "Lucas"};

    // Ordena o vetor de nomes em ordem alfabética
    sort(nomes, nomes + 5);

    // Exibe a lista de nomes ordenada
    cout << "Lista de nomes em ordem alfabética:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << nomes[i] << endl;
    }

    return 0; // Encerra o programa com sucesso
}

