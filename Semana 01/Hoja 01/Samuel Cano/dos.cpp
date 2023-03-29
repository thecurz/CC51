#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string a, b, c;
    a = s.substr(0, 2);
    b = s.substr(2, 1);
    c = s.substr(3, 2);
    cout << stoi(a) + stoi(b) + stoi(c);
    return 0;
}
