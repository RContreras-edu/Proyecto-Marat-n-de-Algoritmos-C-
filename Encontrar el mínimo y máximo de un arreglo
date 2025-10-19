#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese cantidad de elementos: ";
    cin >> n;
    vector<int> a(n);
    cout << "Ingrese los elementos:\n";
    for(int i=0;i<n;i++) cin >> a[i];

    int minimo=a[0], maximo=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<minimo) minimo=a[i];
        if(a[i]>maximo) maximo=a[i];
    }
    cout << "Minimo: " << minimo << ", Maximo: " << maximo << endl;
    return 0;
}
