#include <iostream>
#include <string>  // Incluído para manipulação de strings
using namespace std;

int main() {
    // Variável para armazenar a resposta do usuário
    string resposta;

    // Solicitar ao usuário que informe se ele não é um robô
    cout << "Você é um robô? (Responda com 'não' ou 'nao' para indicar que você não é um robô): ";
    cin >> resposta;  // Lê a resposta do usuário

    // Verificar se a resposta é negativa (indicando que o usuário é um robô)
    if (resposta == "não" || resposta == "nao") {
        // Se a resposta for 'não' ou 'nao', imprime a mensagem de verificação
        cout << "Por favor, prove que você não é um robô" << endl;
    } else {
        // Caso a resposta não seja 'não' nem 'nao'
        cout << "Obrigado pela sua resposta!" << endl;
    }

    return 0;
}

