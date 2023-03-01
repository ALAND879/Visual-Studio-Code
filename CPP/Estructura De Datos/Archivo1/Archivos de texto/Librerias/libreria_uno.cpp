#include <stdio.h>
#include <conio.h>
#include "C:\Users\mrodr\Desktop\Visual Studio Code\CPP\Estructura De Datos\Archivo1\Archivos_de_texto\Librerias\libreria01.h"
int sumar(int a, int b);

int main(){
    int resp;
    resp = sumar (4,6);
    printf("%d", resp);
}

int sumar (int a, int b){
    return a+b;
}