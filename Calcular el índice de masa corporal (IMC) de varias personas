#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Número de personas: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        double peso, altura;
        cout << "\nPersona " << i << " (peso en kg, altura en m): ";
        cin >> peso >> altura;

        double imc = peso / pow(altura, 2);
        cout << "IMC: " << imc << " - ";
        if (imc < 18.5) cout << "Bajo peso";
        else if (imc < 25) cout << "Normal";
        else if (imc < 30) cout << "Sobrepeso";
        else cout << "Obesidad";
        cout << endl;
    }
    return 0;
}
