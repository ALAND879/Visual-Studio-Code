#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char cad1[20]="Hola, que tal";
    char cad2[20];
    cout << "Ingresa tu nombre";
    cin.getline(cad2,20, '\n');
    strcat(cad1, cad2);
    cout << cad1 << endl;
    getch();
    return 0;
}