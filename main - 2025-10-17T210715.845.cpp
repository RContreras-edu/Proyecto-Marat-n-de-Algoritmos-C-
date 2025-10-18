#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    for(int i=0;i<n/2;i++)
        swap(a[i], a[n-i-1]);

    cout << "Arreglo invertido: ";
    for(int x:a) cout << x << " ";
    cout << endl;
    return 0;
}
