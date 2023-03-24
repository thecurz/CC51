#include <iostream>
#include <algorithm>

using namespace std;

int a, b, c, d;

int main(){
    //Ejercicio 1
    //Forma ChatGPT
    a = 5, b = 10, c = 15, d = 20;

    int arr[] = { a, b, c, d };

    sort(arr, arr + 4, greater<int>());

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"\n";
    
    //Forma del profesor
    int num[4];
    int temp;
    // Leemos los 4 números
    for(int i = 0; i < 4; i++) {
        cout << "Ingrese un numero: ";
        cin >> num[i];
    }

    // Ordenamos los números de forma descendente

      for(int i = 0; i < 4; i++) {
        for(int j = i+1; j < 4; j++) {
          if(num[j] > num[i]) {
             temp = num[i];
             num[i] = num[j];
             num[j] = temp;
          } 

        }
    }

    // Mostramos los números ordenados de forma descendente

    cout << "Los números ordenados de forma descendente son: ";

    for(int i = 0; i < 4; i++) {

        cout << num[i] << " ";

    }
   return 0;
}