#include <iostream>
using namespace std;

int main(){
    int m, n;
    cout << "Ingrese filas y columnas: ";
    cin >> m >> n;
    float mat[m][n], suma=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << "Nota ["<<i<<"]["<<j<<"]: ";
            cin >> mat[i][j];
            suma += mat[i][j];
        }
    }
    cout << "Promedio general: " << suma / (m*n) << endl;
    return 0;
}
