#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char cadena1[30], cadena2[30];
    cout<<"Ingresa la primera cadena: ";
    cin.getline(cadena1, 30, '\n');
    cout<<"Ingresa la segunda cadena: ";
    cin.getline(cadena2, 30, '\n');
    cout<<"endl";

    if(strcmp(cadena1,cadena2)==0){
        cout<<"Ambas cadenas son iguales"<<endl;
    }
    else if(strcmp(cadena1,cadena2)<0){
        cout<<"La palabra " << cadena1 << " va antes que " << cadena2 << endl;
    }
    else if(strcmp(cadena1,cadena2)>0){
        cout<<"La palabra " << cadena1 << " va despues que " << cadena2 << endl;
    }
    getch();
    return 0;
}