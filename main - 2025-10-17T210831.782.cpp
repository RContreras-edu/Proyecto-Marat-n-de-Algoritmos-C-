#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    long long prod=1;
    for(int x:a) prod*=x;

    cout << "Producto de todos los elementos: " << prod << endl;
    return 0;
}
