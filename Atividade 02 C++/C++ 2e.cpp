#include <iostream> // Inclui a biblioteca padrão para entrada e saída
#include <cmath>    // Inclui a biblioteca para funções matemáticas, como sqrt()

using namespace std; // Usa o namespace padrão para evitar a necessidade de prefixar std::

int main() { // Função principal que é o ponto de entrada do programa
    
    // Declara uma variável para armazenar o número digitado pelo usuário
    double numero;

    // Solicita ao usuário para digitar um número
    cout << "Digite um número: ";
    cin >> numero; // Lê o número digitado da entrada padrão e armazena na variável 'numero'

    // Verifica se o número é não-negativo, pois a raiz quadrada de números negativos não é definida no conjunto dos números reais
    if (numero >= 0) {
        // Calcula a raiz quadrada do número
        double raizQuadrada = sqrt(numero);

        // Exibe a raiz quadrada do número na tela
        cout << "A raiz quadrada do número é: " << raizQuadrada << endl;
    } else {
        // Exibe uma mensagem de erro se o número for negativo
        cout << "Erro: Não é possível calcular a raiz quadrada de um número negativo." << endl;
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

