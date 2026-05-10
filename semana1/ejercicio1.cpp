#include <iostream>
using namespace std;

int main() {
    const int TOTAL_VEHICULOS = 15;
    int flota[TOTAL_VEHICULOS] = {0,1,2,0,0,1,0,2,0,1,0,0,1,2,0};

    int disponibles = 0;
    int alquilados = 0;
    int mantenimiento = 0;

    for (int i = 0; i < TOTAL_VEHICULOS; i++) {
        if (flota[i] == 0) {
            disponibles++;
        } else if (flota[i] == 1) {
            alquilados++;
        } else if (flota[i] == 2) {
            mantenimiento++;
        }
    }

    cout << "Disponibles: " << disponibles
         << " | Alquilados: " << alquilados
         << " | Mantenimiento: " << mantenimiento << endl;

    return 0;
}
