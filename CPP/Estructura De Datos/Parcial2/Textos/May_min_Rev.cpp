#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char cad1[30], cad2[30];
    printf("Ingresa una palabra: ");
    cin.getline(cad1,30, '\n');

    cout << "La palabra invertida es: " << strrev(cad1) << endl;

    cout << "En mayusculas es: " << strupr(cad1) << endl;

    cout << "En minusculas es: " << strlwr(cad1) << endl;

    getch();
    return 0;
}