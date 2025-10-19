#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Ingrese tamaño vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Ingrese elementos:\n";
    for (int &x : vec) cin >> x;

    cout << "Elementos: ";
    for_each(vec.begin(), vec.end(), [](int x){ cout << x << " "; });
    cout << endl;

    return 0;
}

