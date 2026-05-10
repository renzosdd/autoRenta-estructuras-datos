#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int DIAS = 7;
    const int VEHICULOS = 15;

    string nombresDias[DIAS] = {
        "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"
    };

    int grilla[DIAS][VEHICULOS] = {
        {0,1,0,0,1,0,1,0,0,1,0,1,0,0,1},
        {1,0,1,0,0,1,0,1,0,0,1,0,1,0,0},
        {0,0,1,1,0,0,1,0,1,0,0,1,0,1,0},
        {1,0,0,1,0,1,0,0,1,0,1,0,0,1,0},
        {0,1,0,0,1,0,0,1,0,1,0,0,1,0,1},
        {1,1,0,0,0,1,1,0,0,0,1,1,0,0,0},
        {0,0,1,1,1,0,0,1,1,1,0,0,1,1,1}
    };

    cout << setw(12) << " ";
    for (int vehiculo = 0; vehiculo < VEHICULOS; vehiculo++) {
        cout << setw(4) << ("V" + to_string(vehiculo + 1));
    }
    cout << endl;

    for (int dia = 0; dia < DIAS; dia++) {
        cout << setw(12) << left << (nombresDias[dia] + ":") << right;
        for (int vehiculo = 0; vehiculo < VEHICULOS; vehiculo++) {
            cout << setw(4) << grilla[dia][vehiculo];
        }
        cout << endl;
    }

    return 0;
}
