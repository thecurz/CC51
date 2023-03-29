#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Residuo de a/b: " << a % b << endl;
    cout << "Residuo de c/a: " << c % a << endl;
    cout << "Residuo de la división de b entre el residuo de c/a: " << b % (c % a);
}
