#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << (int(pow(3, a))) % 100 + (int(pow(3, b))) % 100;
}
