#include <iostream>
#include <math.h>

using namespace std;

void ejercicio1()
{
    int numeros[4];
    cout << "Ingrese 4 numeros : \n";
    cin >> numeros[0];
    cin >> numeros[1];
    cin >> numeros[2];
    cin >> numeros[3];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (numeros[i] < numeros[j])
            {
                int aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }
    for (auto i : numeros)
    {
        cout << i << " ";
    }
}

void ejercicio2()
{
    int numero;
    cout << "Ingrese un numero de 5 cifras: \n";
    cin >> numero;
    int p1 = numero / 1000;
    int p2 = (numero / 100) % 10;
    int p3 = numero % 100;
    cout << p1 << " + " << p2 << " + " << p3 << " = " << p1 + p2 + p3 << endl;
}

void ejercicio3()
{
    int numeros[3], residuo;
    int count = 0;
    do
    {
        try
        {
            printf("Introduzca el número %d : ", count + 1);
            cin >> numeros[count];

            if (numeros[count] <= 0)
            {
                throw "El número debe ser positivo.";
            }
            count++;
        }
        catch (const char *msg)
        {
            cerr << "Error: " << msg << endl;
        }
    } while (count != 3);
    do
    {
        try
        {
            cout << "Introduzca número para obtener residuos: ";
            cin >> residuo;

            if (residuo <= 0)
            {
                throw "El número debe ser positivo.";
            }
            count++;
        }
        catch (const char *msg)
        {
            cerr << "Error: " << msg << endl;
        }
    } while (residuo <= 0);
    int sum_residuos = 0;
    for (auto i : numeros)
    {
        sum_residuos += i % residuo;
    }
    cout << "La suma de residuos nos da " << sum_residuos << endl;
}

void ejercicio4()
{
    int exponente, digito;
    cout << "Ingrese exponente: ";
    cin >> exponente;
    digito = int(pow(2, 5)) % 10;
    printf("El ultimo digito de 2^%d es %d", exponente, digito);
}

void ejercicio5()
{
    int exponentes[2], resultados[2], digitos[2];

    cout << "Ingresar numero 1 :";
    cin >> exponentes[0];
    cout << "Ingresar numero 2 :";
    cin >> exponentes[1];

    resultados[0] = pow(3, exponentes[0]);
    resultados[1] = pow(3, exponentes[1]);
    digitos[0] = resultados[0] % 100;
    digitos[1] = resultados[1] % 100;
    printf("3^%d = %d = %d\n", exponentes[0], resultados[0], digitos[0]);
    printf("3^%d = %d = %d\n", exponentes[1], resultados[1], digitos[1]);
    printf("Suma = %d + %d = %d \n", digitos[0], digitos[1], digitos[0] + digitos[1]);
}

void ejercicio6()
{
    int numeros[3];
    int count = 0;
    do
    {
        try
        {
            printf("Introduzca el número %d : ", count + 1);
            cin >> numeros[count];

            if (numeros[count] <= 0)
            {
                throw "El número debe ser positivo.";
            }
            count++;
        }
        catch (const char *msg)
        {
            cerr << "Error: " << msg << endl;
        }
    } while (count != 3);

    int r1 = numeros[0] % numeros[1];
    int r2 = numeros[2] % numeros[0];
    int resultado = numeros[1] % r2;
    cout << "El residuo entre la division de b entre el residuo de c/a : " << resultado;
}

int main()
{
    ejercicio6();
    return 0;
}