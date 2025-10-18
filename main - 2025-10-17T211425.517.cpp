#include <iostream>
#include <vector>
using namespace std;

bool dfs(int idx, int m, const vector<int>& vals, const vector<int>& avail, vector<int>& used) {
    if (m == 0) return true;
    if (idx == (int)vals.size()) return false;
    int v = vals[idx];
    int maxTake = min(avail[idx], m / v);
    for (int take = maxTake; take >= 0; --take) {
        used[idx] = take;
        if (dfs(idx + 1, m - take * v, vals, avail, used)) return true;
    }
    used[idx] = 0;
    return false;
}

int main() {
    int monto;
    cout << "Ingrese monto entero (ej: 93): ";
    cin >> monto;
    int k;
    cout << "Ingrese cantidad de denominaciones: ";
    cin >> k;
    vector<int> vals(k), avail(k);
    cout << "Ingrese valor y disponibilidad por denominacion (valor cantidad):\n";
    for (int i = 0; i < k; ++i) cin >> vals[i] >> avail[i];
    // ordenar denominaciones descendente para mejor chance voraz
    for (int i = 0; i < k; ++i)
        for (int j = i+1; j < k; ++j)
            if (vals[j] > vals[i]) { swap(vals[i], vals[j]); swap(avail[i], avail[j]); }

    vector<int> used(k,0);
    bool ok = dfs(0, monto, vals, avail, used);
    if (!ok) { cout << "No es posible dar cambio exacto con las monedas disponibles.\n"; return 0; }
    cout << "Solucion encontrada:\n";
    for (int i = 0; i < k; ++i) if (used[i]>0) cout << vals[i] << ": " << used[i] << "\n";
    return 0;
}
