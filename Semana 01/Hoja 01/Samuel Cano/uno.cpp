#include <bits/stdc++.h>
using namespace std;

const int n = 4;

int partition(int a[], int l, int h) {
    int pivot = a[h];
    int i = l - 1;
    for (int j = l; j <= h - 1; j++) {
        if (a[j] >= pivot) swap(a[++i], a[j]);
    }
    swap(a[i + 1], a[h]);
    return i + 1;
}

void quicks(int a[], int l, int h) {
    if (l < h) {
        int pi = partition(a, l, h);
        quicks(a, l, pi - 1);
        quicks(a, pi + 1, h);
    }
}

int main() {
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    quicks(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}
