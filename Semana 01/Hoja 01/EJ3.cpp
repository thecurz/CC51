#include <iostream>

int main(){
    int nums[3], div, suma = 0;

    for (int i = 0; i < 3; i++)
    {
        do
        {
            std::cout << "Ingresar numero "<< i + 1 << ":" << "\n";
            std::cin >> nums[i];
        } while (nums[i] < 0);
    }

    std::cout << "Ingrese numero para obtener residuos: ";
    std::cin >> div;
    
    for (int i = 0; i < 3; i++)
    {
        suma += nums[i] % div;
    }

    std::cout << "La suma es: " << suma;
    
}