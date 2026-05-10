#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int SEMANAS = 4;
    const int CATEGORIAS = 3;
    const int TOTAL_COLUMNAS = 4;

    string categorias[CATEGORIAS] = {"Sedan", "Pickup", "Camioneta"};

    double ingresos[SEMANAS][TOTAL_COLUMNAS] = {
        {540.00, 650.00, 350.00, 0.00},
        {800.00, 900.00, 610.00, 0.00},
        {1250.00, 1600.00, 1200.00, 0.00},
        {1260.00, 2500.00, 1840.00, 0.00}
    };

    cout << fixed << setprecision(2);

    for (int semana = 0; semana < SEMANAS; semana++) {
        double totalSemana = 0.0;
        for (int categoria = 0; categoria < CATEGORIAS; categoria++) {
            totalSemana += ingresos[semana][categoria];
        }
        ingresos[semana][3] = totalSemana;
    }

    cout << "Totales por semana:" << endl;
    for (int semana = 0; semana < SEMANAS; semana++) {
        cout << "Semana " << (semana + 1) << ": $" << ingresos[semana][3] << endl;
    }

    cout << endl << "Totales por categoria:" << endl;
    for (int categoria = 0; categoria < CATEGORIAS; categoria++) {
        double totalCategoria = 0.0;
        for (int semana = 0; semana < SEMANAS; semana++) {
            totalCategoria += ingresos[semana][categoria];
        }
        cout << "Total " << categorias[categoria] << ": $" << totalCategoria << endl;
    }

    return 0;
}
