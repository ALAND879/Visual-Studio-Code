#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>

using namespace std;

int main(){
    char cad1[30]="HOLA", cad2[30]="hola";
    
    strlwr(cad1);

    if(strcmp(cad2,cad1)==0){
        cout << "Son iguales";
    }
    else{
        cout << "No son iguales";
    }
    getch();
    return 0;
}