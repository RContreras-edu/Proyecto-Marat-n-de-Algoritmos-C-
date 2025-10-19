#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    int suma=0, cnt=0;
    for(int x:a) if(x%2==0){ suma+=x; cnt++; }

    if(cnt>0) cout << "Promedio de pares: " << (double)suma/cnt << endl;
    else cout << "No hay numeros pares.\n";
    return 0;
}
