#include <iostream>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
using namespace std;

void registrar_precio_producto();
int abrir_cuenta();
void delay();

void delay(int secs) {for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));}

void registrar_precio_producto(){


}

int abrir_cuenta(){

    
}


int main(){
    int opción = 3;
    setlocale(LC_CTYPE,"Spanish");
    system("color 0B");

    do{
    cout << "Menú de opciones: " << endl;
    cout << "1.- Registrar o cambiar precio de producto " << endl;
    cout << "2.- Abrir Cuenta " << endl;
    cout << "3.- Salir " << endl;
    cout << "Elija una opción: ";
    cin >> opción;
        while (opción != 1 && opción != 2 && opción != 3){
            cout << "Opción no reconocida, ingrese un número valido ";
            delay(3);
            system("cls");
            cout << "Menú de opciones: " << endl;
            cout << "1.- Registrar o cambiar precio de producto " << endl;
            cout << "2.- Abrir Cuenta " << endl;
            cout << "3.- Salir " << endl;
            cout << "Elija una opción: ";
            cin >> opción;
        }
    
        system("cls");

        switch (opción){
            case 1:
                cout<<"Ingreso opción 1";
                delay(3);
                system("cls");
            break;

            case 2:
                cout<<"Ingreso opción 2";
                delay(3);
                system("cls");
            break;

            case 3:
                cout<<"Saliendo...";
                delay(3);
            break;
        }
    }while (opción == 1 || opción == 2);
}



