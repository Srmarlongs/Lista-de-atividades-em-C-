#include <iostream>
using namespace std;

const int TOTAL_MESAS = 30;
const int LUGARES_POR_MESA = 5;
const int CODIGO_INICIO = 100;
const int CODIGO_FIM = 129;

int main() {
    int mesas[TOTAL_MESAS] = {0}; // Array para armazenar a quantidade de lugares ocupados em cada mesa
    int totalLugaresOcupados = 0;
    int codigoMesa;
    int lugaresDesejados;

    while (true) {
        // Solicita ao usu�rio o c�digo da mesa
        cout << "Digite o c�digo da mesa (100 a 129) ou 0 para sair: ";
        cin >> codigoMesa;

        // Verifica se o usu�rio deseja sair
        if (codigoMesa == 0) {
            cout << "Encerrando o programa." << endl;
            break;
        }

        // Verifica se o c�digo da mesa est� dentro do intervalo permitido
        if (codigoMesa < CODIGO_INICIO || codigoMesa > CODIGO_FIM) {
            cout << "C�digo de mesa inv�lido. Deve estar entre 100 e 129." << endl;
            continue;
        }

        // Calcula o �ndice da mesa no array
        int indiceMesa = codigoMesa - CODIGO_INICIO;

        // Solicita ao usu�rio a quantidade de lugares desejados
        cout << "Digite a quantidade de lugares desejados: ";
        cin >> lugaresDesejados;

        // Verifica se a quantidade de lugares desejados � v�lida
        if (lugaresDesejados <= 0 || lugaresDesejados > LUGARES_POR_MESA) {
            cout << "Quantidade de lugares inv�lida. Deve ser entre 1 e " << LUGARES_POR_MESA << "." << endl;
            continue;
        }

        // Verifica se h� lugares suficientes dispon�veis na mesa selecionada
        int lugaresDisponiveis = LUGARES_POR_MESA - mesas[indiceMesa];
        if (lugaresDisponiveis >= lugaresDesejados) {
            // Realiza a reserva
            mesas[indiceMesa] += lugaresDesejados;
            totalLugaresOcupados += lugaresDesejados;
            cout << "Reserva realizada com sucesso!" << endl;
        } else {
            // Informa que n�o h� lugares suficientes
            cout << "N�o h� lugares suficientes dispon�veis na mesa selecionada." << endl;
        }

        // Verifica se todos os lugares est�o ocupados
        if (totalLugaresOcupados >= TOTAL_MESAS * LUGARES_POR_MESA) {
            cout << "Todos os lugares est�o ocupados." << endl;
            break;
        }
    }

    return 0; // Encerra o programa com sucesso
}

