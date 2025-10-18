#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    cout << "Ingrese x1 y y1: ";
    cin >> x1 >> y1;
    cout << "Ingrese x2 y y2: ";
    cin >> x2 >> y2;
    double dx = x2 - x1;
    double dy = y2 - y1;
    double dist = sqrt(dx*dx + dy*dy);
    cout << fixed << setprecision(6);
    cout << "Distancia euclidiana: " << dist << endl;
    return 0;
}
