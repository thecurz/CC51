//Carlos Castilla #202116277
//Eduarso Puglisevich #20201e850
//Jak Campos #20211a184

#include <iostream>
using namespace std;
template <typename T>
void fillArray(T* arr, int size, int index = 0) {
    if (index == size) {
        return;
    }
    cout << "Ingresa el elemento " << index + 1 << ": ";
    cin >> arr[index];
    fillArray(arr, size, index + 1);
}

template <typename T>
void printArray(const T* arr, int size, int index = 0) {
    if (index == size) {
        return;
    }
    cout << arr[index] << " ";
    printArray(arr, size, index + 1);
}

int main() {
    int size;

    cout << "Ingresa la longitud del arreglo: ";
    cin >> size;

    int* arr = new int[size];

    fillArray(arr, size);
    cout << "Los elementos del arreglo son: ";
    printArray(arr, size);

    delete[] arr;

    return 0;
}
