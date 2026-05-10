#include <iostream>
using namespace std;

int main() {
    const int TOTAL_VEHICULOS = 15;
    int rentas[TOTAL_VEHICULOS] = {5, 12, 3, 8, 15, 2, 9, 11, 4, 7, 6, 13, 1, 10, 14};
    int ids[TOTAL_VEHICULOS];

    for (int i = 0; i < TOTAL_VEHICULOS; i++) {
        ids[i] = i + 1;
    }

    for (int i = 0; i < TOTAL_VEHICULOS - 1; i++) {
        for (int j = 0; j < TOTAL_VEHICULOS - 1 - i; j++) {
            if (rentas[j] < rentas[j + 1]) {
                int auxRentas = rentas[j];
                rentas[j] = rentas[j + 1];
                rentas[j + 1] = auxRentas;

                int auxId = ids[j];
                ids[j] = ids[j + 1];
                ids[j + 1] = auxId;
            }
        }
    }

    cout << "Ranking de vehiculos mas rentados:" << endl;
    for (int i = 0; i < TOTAL_VEHICULOS; i++) {
        cout << (i + 1) << ". Vehiculo " << ids[i]
             << ": " << rentas[i] << " rentas" << endl;
    }

    return 0;
}
