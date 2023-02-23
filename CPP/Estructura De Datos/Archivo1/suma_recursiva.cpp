#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int suma_factorial(int a);

int main(){
int numero;
cout<<"ingresa un numero al que le sumaras todos los anteriores";
cin>>numero;
cout<<"La suma de todos los numeros es: "<< suma_factorial(numero);
getch();
}

int suma_factorial(int a){
    if (a == 0)
    {
        a = 0;
    }
    else{
        a = a + suma_factorial(a-1);
        return a;
    }
    
    return a;
}