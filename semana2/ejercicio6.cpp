#include <iostream>
using namespace std;

const int VEHICULOS = 15;
const int DIAS_MES = 30;

void reservarVehiculo(int calendario[VEHICULOS][DIAS_MES], int vehiculo, int dia) {
    calendario[vehiculo - 1][dia - 1]++;
}

int main() {
    int calendario[VEHICULOS][DIAS_MES] = {};

    reservarVehiculo(calendario, 3, 12);
    reservarVehiculo(calendario, 3, 12);
    reservarVehiculo(calendario, 9, 25);
    reservarVehiculo(calendario, 9, 25);
    reservarVehiculo(calendario, 1, 5);
    reservarVehiculo(calendario, 7, 18);

    bool hayConflictos = false;

    for (int vehiculo = 0; vehiculo < VEHICULOS; vehiculo++) {
        for (int dia = 0; dia < DIAS_MES; dia++) {
            if (calendario[vehiculo][dia] > 1) {
                cout << "CONFLICTO: Vehiculo " << (vehiculo + 1)
                     << " tiene doble reserva el dia " << (dia + 1) << endl;
                hayConflictos = true;
            }
        }
    }

    if (!hayConflictos) {
        cout << "No se encontraron conflictos de reserva." << endl;
    }

    return 0;
}
