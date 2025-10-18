#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double dif1 = fabs(M_PI - (22.0 / 7.0));
    double dif2 = fabs(M_PI - (355.0 / 113.0));

    if (dif1 < dif2)
        cout << "22/7 es más cercana a PI." << endl;
    else
        cout << "355/113 es más cercana a PI." << endl;

    return 0;
}
