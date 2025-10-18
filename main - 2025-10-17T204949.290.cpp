#include <iostream>
#include <cmath>

int main() {
    double ang;
    std::cout << "Ingrese un angulo (grados): ";
    std::cin >> ang;
    double res = fmod(ang, 360.0);
    if (res < 0) res += 360.0;
    std::cout << "Angulo normalizado: " << res << " grados" << std::endl;
    return 0;
}
