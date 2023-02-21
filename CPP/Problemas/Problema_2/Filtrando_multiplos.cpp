#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;

int main(){
    int entero, multiplo;
    int arreglo[200];
    int a=0;
    //lee el numero de enteros que dará el programa
    cin >> entero;

    //llena el arreglo con los enteros 
    for (int i = 0; i < entero*2; i++)
    {
        if (i % 2 == 1);
        {
            cin >> arreglo[a];
            a = a + 1;
        }
        
    }
    
    cin >> multiplo;

        int z=0;
    for (int i = 0; i < entero*2; i++)
    {
        if (i % 2 == 1);
        {
            if (arreglo[i] % multiplo == 0)
            {
                cout << arreglo[z];
                z = z + 1;
            }
            else{
                cout << "X";
            }
            
            
        }
    }
    
}