#include <iostream> // Inclui a biblioteca padrão para entrada e saída
#include <string>  // Inclui a biblioteca padrão para manipulação de strings

// Usa o namespace padrão para evitar a necessidade de prefixar std::
using namespace std;

int main() { // Função principal que é o ponto de entrada do programa
    
    // Declara variáveis para armazenar as partes do endereço
    string numeroCasa, rua, bairro, cidade, estado;

    // Solicita ao usuário para digitar o número da casa
    cout << "Digite o número da casa: ";
    
    getline(cin, numeroCasa); // Lê a entrada do usuário e armazena na variável numeroCasa

    // Solicita ao usuário para digitar o nome da rua
    cout << "Digite a rua: ";
    
    getline(cin, rua); // Lê a entrada do usuário e armazena na variável rua

    // Solicita ao usuário para digitar o nome do bairro
    cout << "Digite o bairro: ";
    
    getline(cin, bairro); // Lê a entrada do usuário e armazena na variável bairro

    // Solicita ao usuário para digitar o nome da cidade
    cout << "Digite a cidade: ";
    
    getline(cin, cidade); // Lê a entrada do usuário e armazena na variável cidade

    // Solicita ao usuário para digitar o nome do estado
    cout << "Digite o estado: ";
    
    getline(cin, estado); // Lê a entrada do usuário e armazena na variável estado

    // Exibe o endereço completo na tela
    cout << "Endereço Completo:" << endl;
    
    cout << "Número da Casa: " << numeroCasa << endl; // Exibe o número da casa
    cout << "Rua: " << rua << endl; // Exibe o nome da rua
    cout << "Bairro: " << bairro << endl; // Exibe o nome do bairro
    cout << "Cidade: " << cidade << endl; // Exibe o nome da cidade
    cout << "Estado: " << estado << endl; // Exibe o nome do estado

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

