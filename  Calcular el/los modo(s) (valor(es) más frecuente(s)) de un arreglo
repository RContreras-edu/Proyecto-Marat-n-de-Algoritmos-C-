#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Ingrese cantidad de elementos: ";
    if (!(cin >> n) || n <= 0) return 0;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    unordered_map<long long,int> freq;
    for (long long x : a) ++freq[x];

    int maxf = 0;
    for (auto &p : freq) if (p.second > maxf) maxf = p.second;

    cout << "Frecuencia maxima: " << maxf << "\nModos: ";
    vector<long long> modos;
    for (auto &p : freq) if (p.second == maxf) modos.push_back(p.first);
    sort(modos.begin(), modos.end());
    for (auto v : modos) cout << v << " ";
    cout << endl;
    return 0;
}
