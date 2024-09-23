#include <iostream>
#include <string>

int main() {
    // Vari�veis para armazenar o nome e a idade do usu�rio
    std::string nome;
    int idade;

    // Solicita o nome do usu�rio
    std::cout << "Digite seu nome: ";
    std::getline(std::cin, nome);  // Utiliza getline para permitir nomes com espa�os

    // Solicita a idade do usu�rio
    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    // Verifica as condi��es e imprime a mensagem apropriada
    if (nome.length() > 3 && idade >= 18) {
        std::cout << "Acesso permitido" << std::endl;
    } else {
        std::cout << "Acesso negado" << std::endl;
    }

    return 0;
}

