#include <iostream>
#include <string>  // Inclu�do para manipula��o de strings
using namespace std;

int main() {
    // Vari�vel para armazenar a resposta do usu�rio
    string resposta;

    // Solicitar ao usu�rio que informe se ele n�o � um rob�
    cout << "Voc� � um rob�? (Responda com 'n�o' ou 'nao' para indicar que voc� n�o � um rob�): ";
    cin >> resposta;  // L� a resposta do usu�rio

    // Verificar se a resposta � negativa (indicando que o usu�rio � um rob�)
    if (resposta == "n�o" || resposta == "nao") {
        // Se a resposta for 'n�o' ou 'nao', imprime a mensagem de verifica��o
        cout << "Por favor, prove que voc� n�o � um rob�" << endl;
    } else {
        // Caso a resposta n�o seja 'n�o' nem 'nao'
        cout << "Obrigado pela sua resposta!" << endl;
    }

    return 0;
}

