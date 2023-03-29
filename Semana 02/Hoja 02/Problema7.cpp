//Carlos Castilla #202116277
//Eduarso Puglisevich #20201e850
//Jak Campos #20211a184


#include <iostream>
using namespace std;

void printRow(int base) {
    if (base == 0) {
        return;
    }
    cout << '*';
    printRow(base - 1);
}

void printRectangle(int base, int height) {
    if (height == 0) {
        return;
    }
    printRow(base);
    cout << endl;
    printRectangle(base, height - 1);
}

int main() {
    int base, height;

    cout << "Ingresa la base: ";
    cin >> base;
    cout << "Ingresa la altura: ";
    cin >> height;

    printRectangle(base, height);

    return 0;
}
