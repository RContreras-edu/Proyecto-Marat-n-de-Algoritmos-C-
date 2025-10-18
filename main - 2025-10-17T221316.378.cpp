#include <iostream>
#include <vector>
using namespace std;

void backtrack(vector<int>& nums, int objetivo, int i, vector<int>& actual, int suma) {
    if (suma == objetivo) {
        for (int x : actual) cout << x << " ";
        cout << endl;
        return;
    }
    if (i >= nums.size() || suma > objetivo) return;

    // Incluir nums[i]
    actual.push_back(nums[i]);
    backtrack(nums, objetivo, i + 1, actual, suma + nums[i]);

    // No incluir nums[i]
    actual.pop_back();
    backtrack(nums, objetivo, i + 1, actual, suma);
}

int main() {
    int n, objetivo;
    cout << "Cantidad de elementos: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Elementos: ";
    for (int i = 0; i < n; ++i) cin >> nums[i];
    cout << "Suma objetivo: ";
    cin >> objetivo;

    vector<int> actual;
    cout << "Subconjuntos válidos:\n";
    backtrack(nums, objetivo, 0, actual, 0);
    return 0;
}


