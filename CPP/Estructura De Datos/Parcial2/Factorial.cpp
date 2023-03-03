#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int factorial(int);

int main(){
int numero;

    cout<<"Ingresa un numero: ";
    cin>>numero;
    cout<<"El factorial del numero es: "<<factorial(numero);
    getch();
    return 0;
}

int factorial (int n){
    if (n==0){
        n=1;
    }

    else{
        n=n*factorial(n-1);
    }

    return n;
}
