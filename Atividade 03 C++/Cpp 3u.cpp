#include <iostream>
#include <string>  // Incluído para manipulação de strings
using namespace std;

int main() {
    // Variável para armazenar a resposta do usuário
    string resposta;

    // Solicitar ao usuário que informe se deseja comprar o produto
    cout << "Deseja comprar o produto? (Digite 'sim' ou 's'): ";
    cin >> resposta;  // Lê a resposta do usuário

    // Verificar se a resposta é 'sim' ou 's'
    if (resposta == "sim" || resposta == "s") {
        // Se a resposta for 'sim' ou 's', imprime a mensagem de agradecimento
        cout << "Obrigado pela compra!" << endl;
    } else {
        // Caso a resposta não seja 'sim' nem 's'
        cout << "Obrigado pela sua atenção." << endl;
    }

    return 0;
}

