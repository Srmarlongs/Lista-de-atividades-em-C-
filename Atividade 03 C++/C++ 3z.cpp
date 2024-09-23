#include <iostream>
#include <string>  // Incluído para manipulação de strings
using namespace std;

int main() {
    // Variável para armazenar a resposta do usuário
    string resposta;

    // Solicitar ao usuário que informe se ele é um membro inativo
    cout << "Você é um membro inativo do clube? (Responda com 'sim' ou 'não' para indicar que sim): ";
    cin >> resposta;  // Lê a resposta do usuário

    // Verificar se a resposta indica que o usuário é um membro inativo
    if (resposta == "sim" || resposta == "Sim") {
        // Se a resposta for 'sim' ou 'Sim', imprime a mensagem de atualização
        cout << "Por favor, atualize sua inscrição para continuar usufruindo dos benefícios do clube" << endl;
    } else {
        // Caso a resposta não seja 'sim' ou 'Sim'
        cout << "Obrigado pela sua resposta!" << endl;
    }

    return 0;
}

