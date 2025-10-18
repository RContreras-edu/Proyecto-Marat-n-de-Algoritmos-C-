#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Cantidad de numeros: ";
    cin >> n;
    int v[n];
    for(int i=0;i<n;i++){
        cout << "Numero " << i+1 << ": ";
        cin >> v[i];
    }
    int mayor=v[0], menor=v[0];
    for(int i=1;i<n;i++){
        if(v[i]>mayor) mayor=v[i];
        if(v[i]<menor) menor=v[i];
    }
    cout << "Mayor: " << mayor << "\nMenor: " << menor << endl;
    return 0;
}
