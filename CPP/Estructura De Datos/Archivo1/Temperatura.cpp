#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){
    float temperatura;
    int opcion;
    int celsius_a_fahrenheit(int a);
    int fahrenheit_a_celsius(int a);
    
    cout << "Ingresa la conversion que quieres realizar:\n1.- Fahrenheit a Celsius\n2.-Celsius a Fahrenheit \n3.-Salir \n";
    cin >> opcion;
    while (opcion != 1 && opcion != 2 && opcion != 3){
        cout<<"Ingresa una opcion valida: ";
        cin>>opcion;
    }

    cout << "Ingresa la temperatura: ";
    cin >> temperatura;

    switch (opcion){
        case 1:
        fahrenheit_a_celsius(temperatura);
        getch();
        break;

        case 2:
        celsius_a_fahrenheit(temperatura);
        getch();
        break;

        case 3:
        cout<<"Gracias";
        break;

        default:
        break;
    }

}

int celsius_a_fahrenheit(int a){
float temperatura = a * 1.8 + 32;
cout<<"la temperatura convertida es: "<< temperatura;
return 0;
}


int fahrenheit_a_celsius(int a){
float temperatura = (a-32)/1.8;
cout<<"la temperatura convertida es: "<< temperatura;
return 0;
}