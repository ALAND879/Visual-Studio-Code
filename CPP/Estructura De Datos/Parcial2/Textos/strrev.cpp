#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>

using namespace std;

int main(){
    char cad1[30];
    char char2[30];
    cout << "Ingresa una palabra: ";
    cin.getline(cad1, 30, '\n');
    strcpy(strrev(cad1), char2);

    if (strcmp (cad1, char2) == 0){
        cout << "Es una palabra palindroma";
    }
    else {
        cout << "No es una palabra palindroma";
    }
    getch();
    return 0;
}
