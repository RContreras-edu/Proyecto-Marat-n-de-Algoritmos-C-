#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Ingrese un numero decimal: ";
    cin >> n;
    vector<int> bin;
    while(n > 0){
        bin.push_back(n % 2);
        n /= 2;
    }
    cout << "Binario: ";
    for(int i = bin.size()-1; i >= 0; i--)
        cout << bin[i];
    cout << endl;
    return 0;
}
