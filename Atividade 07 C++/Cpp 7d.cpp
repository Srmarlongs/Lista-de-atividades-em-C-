#include <iostream>
#include <string>
using namespace std;

int main() {
    const string SENHA_CORRETA = "senha123"; // Senha correta para compara��o
    string senha;
    int tentativas = 0;
    const int MAX_TENTATIVAS = 3;
    bool senhaCorreta = false;

    // Permite ao usu�rio tentar inserir a senha at� tr�s vezes usando o loop do-while
    do {
        cout << "Digite a senha: ";
        cin >> senha;

        // Verifica se a senha inserida est� correta
        if (senha == SENHA_CORRETA) {
            senhaCorreta = true;
            break; // Sai do loop se a senha estiver correta
        } else {
            tentativas++;
            if (tentativas < MAX_TENTATIVAS) {
                cout << "Senha incorreta. Tentativas restantes: " << (MAX_TENTATIVAS - tentativas) << endl;
            }
        }
    } while (tentativas < MAX_TENTATIVAS); // O loop continua enquanto o n�mero de tentativas for menor que o m�ximo permitido

    // Exibe a mensagem de acordo com o resultado das tentativas
    if (senhaCorreta) {
        cout << "Senha correta! Acesso permitido." << endl;
    } else {
        cout << "Senha incorreta. N�mero m�ximo de tentativas excedido." << endl;
    }

    return 0;
}

