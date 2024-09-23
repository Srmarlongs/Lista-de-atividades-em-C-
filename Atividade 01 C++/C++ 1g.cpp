#include <iostream> // Inclui a biblioteca padr�o para entrada e sa�da
#include <string>  // Inclui a biblioteca padr�o para manipula��o de strings

// Usa o namespace padr�o para evitar a necessidade de prefixar std::
using namespace std;

int main() { // Fun��o principal que � o ponto de entrada do programa
    
    // Declara vari�veis para armazenar as partes do endere�o
    string numeroCasa, rua, bairro, cidade, estado;

    // Solicita ao usu�rio para digitar o n�mero da casa
    cout << "Digite o n�mero da casa: ";
    
    getline(cin, numeroCasa); // L� a entrada do usu�rio e armazena na vari�vel numeroCasa

    // Solicita ao usu�rio para digitar o nome da rua
    cout << "Digite a rua: ";
    
    getline(cin, rua); // L� a entrada do usu�rio e armazena na vari�vel rua

    // Solicita ao usu�rio para digitar o nome do bairro
    cout << "Digite o bairro: ";
    
    getline(cin, bairro); // L� a entrada do usu�rio e armazena na vari�vel bairro

    // Solicita ao usu�rio para digitar o nome da cidade
    cout << "Digite a cidade: ";
    
    getline(cin, cidade); // L� a entrada do usu�rio e armazena na vari�vel cidade

    // Solicita ao usu�rio para digitar o nome do estado
    cout << "Digite o estado: ";
    
    getline(cin, estado); // L� a entrada do usu�rio e armazena na vari�vel estado

    // Exibe o endere�o completo na tela
    cout << "Endere�o Completo:" << endl;
    
    cout << "N�mero da Casa: " << numeroCasa << endl; // Exibe o n�mero da casa
    cout << "Rua: " << rua << endl; // Exibe o nome da rua
    cout << "Bairro: " << bairro << endl; // Exibe o nome do bairro
    cout << "Cidade: " << cidade << endl; // Exibe o nome da cidade
    cout << "Estado: " << estado << endl; // Exibe o nome do estado

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

