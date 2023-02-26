#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
void menu();
int x;
void delay();

void delay(int secs) {for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));}


int main(){
    
    menu();

    switch (x){
    case 1://Imagen
        system("cls");
        system("C:\\Users\\mrodr\\Desktop\\Ejecutables\\Imagen.jpg");
        getch();
        break;
    
    case 2://Ejecutable
        system("cls");
        system("C:\\Users\\mrodr\\Desktop\\Ejecutables\\Factorial.exe");
        getch();

    case 3://Video
        system("cls");
        system("C:\\Users\\mrodr\\Desktop\\Ejecutables\\Blink.mp4");
        getch();
        break;

    case 4://Audio
        system("cls");
        system("C:\\Users\\mrodr\\Desktop\\Ejecutables\\THE_RAVEN.m4a");
        getch();
        break;

    default:
        break;
    }
}

void menu(){
    system("cls");
    cout<<"Menu de opciones\n1.-Imagen\n2.-Ejecutable\n3.-Video\n4.-Audio\n5.-Salir\n\n";
    cout<< "Ingresa una opción: ";
    cin>>x;
    while(x != 1 && x != 2 && x != 3 && x != 4 && x != 5){
        system("cls");
        cout<<"Opción no valida, introduce otro numero.";
        delay(3);
        cout<<"Menu de opciones\n1.-Imagen\n2.-Ejecutable.-\n3.-Video\n4.-Audio\n5.-Salir\n\n";
        cout<< "Ingresa una opción: ";
        cin >> x;
    }
}