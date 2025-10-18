#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n1, n2;
    cout << "Tamaño vector 1: ";
    cin >> n1;
    vector<int> v1(n1);
    cout << "Ingrese elementos vector 1 ordenados:\n";
    for (int &x : v1) cin >> x;

    cout << "Tamaño vector 2: ";
    cin >> n2;
