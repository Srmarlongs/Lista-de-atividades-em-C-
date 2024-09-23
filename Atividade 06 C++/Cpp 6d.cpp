#include <iostream>
#include <string>
using namespace std;

int main() {
    const string senhaCorreta = "senha123"; // Senha correta para compara��o
    string senha;
    int tentativas = 0;
    const int maxTentativas = 3;
    bool acessoPermitido = false;

    // Permite ao usu�rio tentar inserir a senha at� tr�s vezes
    while (tentativas < maxTentativas) {
        cout << "Digite a senha: ";
        cin >> senha;

        // Verifica se a senha inserida est� correta
        if (senha == senhaCorreta) {
            acessoPermitido = true;
            break; // Sai do loop se a senha estiver correta
        } else {
            tentativas++;
            cout << "Senha incorreta. Tentativas restantes: " << (maxTentativas - tentativas) << endl;
        }
    }

    // Exibe a mensagem de acordo com o resultado das tentativas
    if (acessoPermitido) {
        cout << "Senha correta! Acesso permitido." << endl;
    } else {
        cout << "Senha incorreta. N�mero m�ximo de tentativas excedido." << endl;
    }

    return 0;
}

