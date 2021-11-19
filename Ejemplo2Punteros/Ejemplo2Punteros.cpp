// Ejemplo2Punteros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void PrimerEjemplo()
{
    //Declarar variable
    int Edad = 33;
    cout << Edad << endl;
    cout << &Edad << endl;

    //Declarar apuntador/puntero
    int* pEdad;

    //Asignar la dirección al apuntador
    pEdad = &Edad;
    cout << pEdad << endl;

    cout << *pEdad << endl;

    Edad = 50;

    cout << Edad << endl;//50
    cout << *pEdad << endl;//50
}

int Sumar(int a, int b)
{
    return a + b;
}


void SumarPunteros(int a, int b, int* result, int* resultResta)
{
    *result = a + b;    
    *resultResta = a - b;
}

void SegundoEjemplo()
{
    int result = 0;
    result = Sumar(10, 5);
    cout << result << endl;

    int result2;
    int resultResta;
    SumarPunteros(10, 5, &result2, &resultResta);

    cout << result2 << endl;
    cout << resultResta << endl;




}
int main()
{
    /*int* Notas;
    Notas = new int[cantidad];*/


    int cantidad = 0;
    cout << "Ingrese Cantidad"<<endl;
    cin >> cantidad;

    int* Pares;
    Pares = new int[cantidad];
    
    //Asignando valores al arreglo
    for (int i = 0; i < cantidad; i++)
    {
        Pares[i] = i * 2;
    }

    //Mostrando valores del arreglo
    for (int i = 0; i < cantidad; i++)
    {
        cout << Pares[i] << endl;
    }




    cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
