#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>

int main() {
    std::string s;
    std::cout << "Ingrese una expresion: ";
    std::getline(std::cin, s);
    std::stack<char> st;
    std::unordered_map<char,char> m = {{')','('}, {']','['}, {'}','{'}};
    bool ok = true;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') st.push(c);
        else if (c == ')' || c == ']' || c == '}') {
            if (st.empty() || st.top() != m[c]) { ok = false; break; }
            st.pop();
        }
    }
    if (!st.empty()) ok = false;
    std::cout << (ok ? "Balanceada" : "No balanceada") << std::endl;
    return 0;
}
