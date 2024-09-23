#include <iostream>
#include <string>

int main() {
    // Variáveis para armazenar o nome e a idade do usuário
    std::string nome;
    int idade;

    // Solicita o nome do usuário
    std::cout << "Digite seu nome: ";
    std::getline(std::cin, nome);  // Utiliza getline para permitir nomes com espaços

    // Solicita a idade do usuário
    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    // Verifica as condições e imprime a mensagem apropriada
    if (nome.length() > 3 && idade >= 18) {
        std::cout << "Acesso permitido" << std::endl;
    } else {
        std::cout << "Acesso negado" << std::endl;
    }

    return 0;
}

