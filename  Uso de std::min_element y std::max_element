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

    auto min_it = min_element(vec.begin(), vec.end());
    auto max_it = max_element(vec.begin(), vec.end());

    cout << "Mínimo: " << *min_it << ", Máximo: " << *max_it << endl;

    return 0;
}
