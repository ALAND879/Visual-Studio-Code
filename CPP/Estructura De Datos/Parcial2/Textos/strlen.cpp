#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

int main(){
    int l;
    char cadena[30];
    cin.getline(cadena, 30, '\n');
    l = strlen(cadena);

    if (l>10)
    {
        cout<<cadena<<endl;
    }
    else
    {
        cout<<l<<endl;
    }
    getch();
}