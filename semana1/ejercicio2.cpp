#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int TOTAL_VEHICULOS = 15;
    double tarifas[TOTAL_VEHICULOS] = {
        35.00, 60.00, 35.00, 75.00, 80.00,
        65.00, 50.00, 90.00, 58.00, 120.00,
        62.00, 70.00, 56.00, 95.00, 59.00
    };

    double minimo = tarifas[0];
    double maximo = tarifas[0];
    double suma = 0.0;

    for (int i = 0; i < TOTAL_VEHICULOS; i++) {
        if (tarifas[i] < minimo) minimo = tarifas[i];
        if (tarifas[i] > maximo) maximo = tarifas[i];
        suma += tarifas[i];
    }

    double promedio = suma / TOTAL_VEHICULOS;
    double presupuesto = 55.00;

    cout << fixed << setprecision(2);
    cout << "Tarifa minima: $" << minimo << "/dia" << endl;
    cout << "Tarifa maxima: $" << maximo << "/dia" << endl;
    cout << "Tarifa promedio: $" << promedio << "/dia" << endl;

    cout << "Ingrese presupuesto maximo: ";
    if (!(cin >> presupuesto)) {
        presupuesto = 55.00;
        cout << presupuesto << " (valor de prueba)" << endl;
    }

    cout << "Vehiculos dentro del presupuesto:" << endl;
    bool encontrado = false;

    for (int i = 0; i < TOTAL_VEHICULOS; i++) {
        if (tarifas[i] <= presupuesto) {
            cout << "Vehiculo " << (i + 1) << ": $" << tarifas[i] << "/dia" << endl;
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "No hay vehiculos dentro de ese presupuesto." << endl;
    }

    return 0;
}
