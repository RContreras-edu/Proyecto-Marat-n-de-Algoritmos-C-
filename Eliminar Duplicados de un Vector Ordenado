#include <iostream>
#include <vector>
using namespace std;


// Función para eliminar duplicados
vector<int> eliminarDuplicados(const vector<int>& nums) {
    if (nums.empty()) return {};
    vector<int> resultado;
    resultado.push_back(nums[0]);


    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1]) {
            resultado.push_back(nums[i]);
        }
    }
    return resultado;
}


int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;


    if (n <= 0) {
        cout << "Error: el número debe ser mayor que 0." << endl;
        return 1;
    }


    vector<int> numeros(n);
    cout << "Ingrese " << n << " números enteros ordenados: ";
    for (int i = 0; i < n; ++i) {
        cin >> numeros[i];
    }


    vector<int> sinDuplicados = eliminarDuplicados(numeros);


    cout << "Vector sin duplicados: ";
    for (int num : sinDuplicados) {
        cout << num << " ";
    }
    cout << endl;


    return 0;
}


