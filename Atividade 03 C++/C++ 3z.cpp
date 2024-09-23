#include <iostream>
#include <string>  // Inclu�do para manipula��o de strings
using namespace std;

int main() {
    // Vari�vel para armazenar a resposta do usu�rio
    string resposta;

    // Solicitar ao usu�rio que informe se ele � um membro inativo
    cout << "Voc� � um membro inativo do clube? (Responda com 'sim' ou 'n�o' para indicar que sim): ";
    cin >> resposta;  // L� a resposta do usu�rio

    // Verificar se a resposta indica que o usu�rio � um membro inativo
    if (resposta == "sim" || resposta == "Sim") {
        // Se a resposta for 'sim' ou 'Sim', imprime a mensagem de atualiza��o
        cout << "Por favor, atualize sua inscri��o para continuar usufruindo dos benef�cios do clube" << endl;
    } else {
        // Caso a resposta n�o seja 'sim' ou 'Sim'
        cout << "Obrigado pela sua resposta!" << endl;
    }

    return 0;
}

