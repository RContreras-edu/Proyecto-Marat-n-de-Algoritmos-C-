#include <iostream>
#include <vector>
using namespace std;

int LIS(const vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return 0;
    vector<int> dp(n, 1);
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (arr[j] < arr[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    int maxLen = 0;
    for (int x : dp) if (x > maxLen) maxLen = x;
    return maxLen;
}

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Elementos: ";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    int longitud = LIS(arr);
    cout << "Longitud de la LIS: " << longitud << endl;
    return 0;
}

