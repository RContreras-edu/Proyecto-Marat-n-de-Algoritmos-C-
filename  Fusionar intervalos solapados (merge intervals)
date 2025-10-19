#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int k;
    cout << "Ingrese cantidad de intervalos: ";
    if (!(cin >> k) || k <= 0) return 0;
    vector<pair<long long,long long>> v(k);
    cout << "Ingrese intervalos (l r) por linea:\n";
    for (int i = 0; i < k; ++i) cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    vector<pair<long long,long long>> res;
    for (auto &iv : v) {
        if (res.empty() || res.back().second < iv.first) res.push_back(iv);
        else res.back().second = max(res.back().second, iv.second);
    }
    cout << "Intervalos fusionados:\n";
    for (auto &p : res) cout << p.first << " " << p.second << "\n";
    return 0;
}
