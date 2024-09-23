#include <iostream>
#include <string>
using namespace std;

int main() {
    const string senhaCorreta = "senha123"; // Senha correta para comparação
    string senha;
    int tentativas = 0;
    const int maxTentativas = 3;
    bool acessoPermitido = false;

    // Permite ao usuário tentar inserir a senha até três vezes
    while (tentativas < maxTentativas) {
        cout << "Digite a senha: ";
        cin >> senha;

        // Verifica se a senha inserida está correta
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
        cout << "Senha incorreta. Número máximo de tentativas excedido." << endl;
    }

    return 0;
}

