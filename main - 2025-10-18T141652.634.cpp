#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    int n, num;
    cout << "Cantidad de números: ";
    cin >> n;

    cout << "Ingrese números:\n";
    for (int i = 0; i < n; ++i) {
        cin >> num;
        pq.push(num);
    }

    cout << "Máximo: " << pq.top() << endl;
    return 0;
}
