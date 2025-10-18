#include <iostream>
using namespace std;

int main() {
    int mat[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };
    int n = 4, x;
    cout << "Ingrese el número a buscar: ";
    cin >> x;

    int i = 0, j = n - 1;
    bool found = false;
    while (i < n && j >= 0) {
        if (mat[i][j] == x) {
            found = true;
            break;
        } else if (mat[i][j] > x)
            j--;
        else
            i++;
    }

    cout << (found ? "Encontrado" : "No encontrado") << endl;
    return 0;
}
