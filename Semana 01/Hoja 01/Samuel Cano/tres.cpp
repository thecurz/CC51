#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    do {
        cout << "ingresa primer numero positivo: ";
        cin >> a;
        cout << endl;
    } while (a < 0);
    do {
        cout << "ingresa segundo numero positivo: ";
        cin >> b;
        cout << endl;
    } while (b < 0);
    do {
        cout << "ingresa tercer numero positivo: ";
        cin >> c;
        cout << endl;
    } while (c < 0);
    do {
        cout << "ingresa positivo para residuo: ";
        cin >> d;
        cout << endl;
    } while (d < 0);
    cout << a % d + b % d + c % d;
    return 0;
}
