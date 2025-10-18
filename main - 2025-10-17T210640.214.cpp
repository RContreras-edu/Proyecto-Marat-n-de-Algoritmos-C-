#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    int suma=0;
    for(int x:a) if(x<0) suma+=x;

    cout << "Suma de numeros negativos: " << suma << endl;
    return 0;
}
