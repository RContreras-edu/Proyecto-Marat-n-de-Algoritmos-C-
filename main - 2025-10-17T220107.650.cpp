#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cuantos juegos desea calificar? ";
    cin >> n;

    int calificacion, suma = 0;
    for(int i = 0; i < n; i++){
        cout << "Calificacion del juego " << i+1 << ": ";
        cin >> calificacion;
        suma += calificacion;
    }

    double promedio = (double)suma / n;
    cout << "Promedio de calificaciones: " << promedio << endl;
    return 0;
}
