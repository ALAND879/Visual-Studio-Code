#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){

char entero[30], real[30];
int n1;
float n2,n3;

cout << "Ingrese un numero entero: ";
cin.getline(entero, 30, '\n');

cout << "Ingrese un numero real: ";
cin.getline(real, 30, '\n');

n1 = atoi(entero);
n2 = atof(real);

n3= n1 + n2;

cout << "La suma de los 2 numeros es: " << n3 << endl;
getch();
return 0;

}