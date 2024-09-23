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
        // Solicita ao usuário o código da mesa
        cout << "Digite o código da mesa (100 a 129) ou 0 para sair: ";
        cin >> codigoMesa;

        // Verifica se o usuário deseja sair
        if (codigoMesa == 0) {
            cout << "Encerrando o programa." << endl;
            break;
        }

        // Verifica se o código da mesa está dentro do intervalo permitido
        if (codigoMesa < CODIGO_INICIO || codigoMesa > CODIGO_FIM) {
            cout << "Código de mesa inválido. Deve estar entre 100 e 129." << endl;
            continue;
        }

        // Calcula o índice da mesa no array
        int indiceMesa = codigoMesa - CODIGO_INICIO;

        // Solicita ao usuário a quantidade de lugares desejados
        cout << "Digite a quantidade de lugares desejados: ";
        cin >> lugaresDesejados;

        // Verifica se a quantidade de lugares desejados é válida
        if (lugaresDesejados <= 0 || lugaresDesejados > LUGARES_POR_MESA) {
            cout << "Quantidade de lugares inválida. Deve ser entre 1 e " << LUGARES_POR_MESA << "." << endl;
            continue;
        }

        // Verifica se há lugares suficientes disponíveis na mesa selecionada
        int lugaresDisponiveis = LUGARES_POR_MESA - mesas[indiceMesa];
        if (lugaresDisponiveis >= lugaresDesejados) {
            // Realiza a reserva
            mesas[indiceMesa] += lugaresDesejados;
            totalLugaresOcupados += lugaresDesejados;
            cout << "Reserva realizada com sucesso!" << endl;
        } else {
            // Informa que não há lugares suficientes
            cout << "Não há lugares suficientes disponíveis na mesa selecionada." << endl;
        }

        // Verifica se todos os lugares estão ocupados
        if (totalLugaresOcupados >= TOTAL_MESAS * LUGARES_POR_MESA) {
            cout << "Todos os lugares estão ocupados." << endl;
            break;
        }
    }

    return 0; // Encerra o programa com sucesso
}

