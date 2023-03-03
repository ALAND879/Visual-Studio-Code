#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int pot(int a, int b);


int main(){
    int base = 0, potencia = 0;
    cout<<"Ingresa la base: ";
    cin>>base;
    cout<<"Ingresa la potencia: ";
    cin>>potencia;
    cout<<"La potencia es: "<< pot(base, potencia);
    getch();
}

int pot(int a, int b){
    int resultado;
    if(b==1){ 
        return a;
    }
    else{
      a = a * pot(a, b-1); 
    }
    return a;
}