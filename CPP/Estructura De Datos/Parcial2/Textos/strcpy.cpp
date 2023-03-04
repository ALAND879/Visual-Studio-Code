#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#include <math.h>
#include <time.h>

using namespace std;

int main(){
    char cad1[30],cad2[30];
    cout<<"digte una cadena";
    cin.getline(cad1,30,'\n');
    strcpy(cad2,cad1);
    cout<<cad2<<endl;
    getch();
    return 0;
}