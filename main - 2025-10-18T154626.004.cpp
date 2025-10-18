#include <algorithm>
using namespace std;

int main() {
    int n, umbral;
    cout << "Ingrese tamaño vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Ingrese elementos:\n";
    for (int &x : vec) cin >> x;

    cout << "Ingrese valor umbral: ";
    cin >> umbral;

    int count_mayores = count_if(vec.begin(), vec.end(), [umbral](int x){ return x > umbral; });

    cout << "Elementos mayores que " << umbral << ": " << count_mayores << endl;

    return 0;
}
