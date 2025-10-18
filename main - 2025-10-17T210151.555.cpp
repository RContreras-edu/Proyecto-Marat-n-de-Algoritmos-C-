#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, cnt=0;
    cout << "Cantidad de elementos: ";
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    for(int x:a) if(x<0) cnt++;
    cout << "Cantidad de numeros negativos: " << cnt << endl;
    return 0;
}
