#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int fact(int n);
int resultado;

int main(){
    int num;
    printf("Proporciona un número: ");
    scanf("%d", &num);
    resultado = fact(num);
    printf("El factorial es %d ", resultado);
    system("pause");
}

int fact(int n){
    if (n==0)
    {
        return 1;
    }
    else
    {
        resultado = n * fact(n-1);
        return resultado;
    }    
}