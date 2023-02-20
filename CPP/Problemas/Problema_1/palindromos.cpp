#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(){
char palabra[60],palindromo[60];
int longitud, longitud_inicial, errores=0, aciertos=0, contador=0;

cout << "Ingresa una palabra, para evaluar si es palindroma: ";
cin >> palindromo;

longitud_inicial=strlen(palindromo);

for (int a=0;a<=longitud_inicial;a++){
    if(palindromo[a]!=' '){
        palabra[contador]=palindromo[a];
        contador=contador+1;
    }
}
longitud=strlen(palabra);
for(int i=0;i<=longitud;i++){
    if (palabra[i]!=palabra[longitud]){
        errores=errores+1;
    }
    else if(palabra[i]==palabra[longitud]){
        aciertos=aciertos+1;
    }
    longitud=longitud-1;
}

if (errores<=0){
    cout << "SI";
}
else if (errores>=0){
    cout << "NO";
}
getch();

}