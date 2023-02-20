#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

int valor_de_hipotenusa(float a, float b);

int main(){
    float cateto_uno, cateto_dos;

    cout<<"Ingresa el valor del cateto a";
    cin>>cateto_uno;
    cout<<"Ingresa el valor del cateto o";
    cin>>cateto_dos;

    valor_de_hipotenusa(cateto_uno, cateto_dos);
    getch();
}

int valor_de_hipotenusa(float a, float b){
    float hipotenusa, cuadrados;
    cuadrados = pow(a,2) + pow(b,2);
    hipotenusa = sqrt(cuadrados);
    cout<<"La hipotenusa es: "<< hipotenusa;
    return 0;
}

