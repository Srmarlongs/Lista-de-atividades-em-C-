#include <iostream>
#include <string>  // Inclu�do para manipula��o de strings
using namespace std;

int main() {
    // Vari�vel para armazenar a resposta do usu�rio
    string resposta;

    // Solicitar ao usu�rio que informe se deseja comprar o produto
    cout << "Deseja comprar o produto? (Digite 'sim' ou 's'): ";
    cin >> resposta;  // L� a resposta do usu�rio

    // Verificar se a resposta � 'sim' ou 's'
    if (resposta == "sim" || resposta == "s") {
        // Se a resposta for 'sim' ou 's', imprime a mensagem de agradecimento
        cout << "Obrigado pela compra!" << endl;
    } else {
        // Caso a resposta n�o seja 'sim' nem 's'
        cout << "Obrigado pela sua aten��o." << endl;
    }

    return 0;
}

