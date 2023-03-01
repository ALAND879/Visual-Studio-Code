#include <stdlib.h>
#include <iostream>
#include <conio.h>
using namespace std;

void delay();

void delay(int secs) {for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));}

int main(){
    int opcion = 1;
    char articulo[60];
    int cantidad, costo, total;
    FILE*file;
    file = fopen("Datos.txt", "a");
    fclose(file);
do
{
    cout<<"Menu de opciones\n1.-Alta\n2.-Imprimir\n3.-Salir\n";
    cout<<"Ingresa una opcion: ";
    cin >> opcion;
    system("cls");
    while (opcion != 1 && opcion != 2 && opcion != 3)
    {
        cout<<"Opción no valida, ingresa otra opcion";
        delay(3);
        system("cls");
        cout<<"Menu de opciones\n1.-Alta\n2.-Imprimir\n3.-Salir\n";
        cout<<"Ingresa una opción: ";
        cin >> opcion;
        system("cls");
    }
    
    switch (opcion){

        case 1:
        file = fopen("Datos.txt", "a");
            printf("Proporciona el nombre del articulo: ");
            scanf("%s", &articulo);
            fprintf(file,"%s \t",articulo);

            printf("\nProporciona la cantidad: "); 
            scanf("%d", &cantidad);
            fprintf(file,"%d \t",cantidad);

            printf("\nProporciona el costo: "); 
            scanf("%d", &costo);
            fprintf(file,"%d \t",costo);
            
            total= costo * cantidad;
            fprintf(file,"%d \n",total);
            fprintf(file,"------------------------- \n",total);
	    fclose(file);
        system("cls");
        break;

        case 2:
        int c;
            file = fopen("Datos.txt", "rt");
            while ((c=fgetc(file))!=EOF) {
                putchar(c);
            }
            getch();
	        fclose(file);
            delay(10);
            system("cls");
        break;
    }
system("cls");
} while (opcion == 1 || opcion == 2);

}
