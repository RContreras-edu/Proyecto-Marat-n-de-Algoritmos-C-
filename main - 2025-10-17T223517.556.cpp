#include <iostream>
#include <vector>
using namespace std;

long long mergeCount(vector<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<int> L(arr.begin() + l, arr.begin() + m + 1);
    vector<int> R(arr.begin() + m + 1, arr.begin() + r + 1);

    long long count = 0;
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
            count += (n1 - i);
        }
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
    return count;
}

long long sortCount(vector<int>& arr, int l, int r) {
    long long cnt = 0;
    if (l < r) {
        int m = l + (r - l) / 2;
        cnt += sortCount(arr, l, m);
        cnt += sortCount(arr, m + 1, r);
        cnt += mergeCount(arr, l, m, r);
    }
    return cnt;
}

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Elementos: ";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    long long inversiones = sortCount(arr, 0, n - 1);
    cout << "Número de inversiones: " << inversiones << endl;

    return 0;
}
