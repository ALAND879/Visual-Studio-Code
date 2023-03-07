#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <windows.h>
#include <random>


using namespace std;
FILE * PDEar;
int n = 1;
void delay();

void delay(int secs) {for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));}

void burbuja(int arr[], int n) {
    PDEar = fopen("PruebaDeEscritorio.txt","w");
    int i, j;
    for (i = 0; i < n-1; i++) {
        fprintf(PDEar,"\nValor de i=%i-------------------------------", i);
        // Últimos i elementos ya están ordenados
        for (j = 0; j < n-i-1; j++) {
            
            fprintf(PDEar,"\n-------Valor de j=%i",j);
            fprintf(PDEar,"\n-------Comparando=[%i,%i]",arr[j],arr[j+1]);
            if (arr[j] > arr[j+1]) {
                // Intercambia arr[j] y arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            fprintf(PDEar,"\n-------Resultado final =[%i>%i]",arr[j],arr[j+1]);
        }
        //fclose(PDEar);
    }
}
void Burbuja2(int arr[], int n){
    PDEar = fopen("PruebaDeEscritorio.txt","w");
    int i, j;
    for (i = 0; i < n-1; i++) {
        fprintf(PDEar,"\nValor de i=%i-------------------------------", i);
        // Últimos i elementos ya están ordenados
        for (j = 0; j < n-i-1; j++) {
            
            fprintf(PDEar,"\n-------Valor de j=%i",j);
            fprintf(PDEar,"\n-------Comparando=[%i,%i]",arr[j],arr[j+1]);
            if (arr[j] < arr[j+1]) {
                // Intercambia arr[j] y arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            fprintf(PDEar,"\n-------Resultado final =[%i>%i]",arr[j],arr[j+1]);
        }
        //fclose(PDEar);
    }
}

int main() {
    
    PDEar = fopen("PruebaDeEscritorio.txt","w");
    int Random_number;
    int opcion = 0;
    int k = 0;
    
    //*Menú
    //while (opcion != 1 || opcion != 2 || opcion != 3 || opcion != 4){
        while(k==0){
        int n = 0;
        fprintf(PDEar,"}\n");
    cout<<"Menu:\nGenerar numero \n1.-Ordenar ascendente\n2.-Ordenar descendente\n3.-Salir(ingrese un numero aleatorio de numeros)\nIngresa una opcion: ";
    cin >> opcion;
        
        cout << "\nIngrese la cantidad de numeros: ";
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
        Random_number = 1 + rand()%100;
        arr[i] = Random_number;
        }

        cout<<"Los numeros que se crearon son: ";
        fprintf(PDEar,"\narr[%i] = {",n);
        for (int i = 0; i < n; i++) {
        fprintf(PDEar,"%i,",arr[i]);
        printf("%d ", arr[i]);
        }
        system("cls");
    //}
    
        
    switch(opcion){
        case 1:
        cout << "El arreglo sin ordenar es: ";
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        } 
        cout << endl;

        burbuja(arr, n);

        cout << "El arreglo ordenado es: ";
        fprintf(PDEar,"\nEl arreglo ordenado es-> arr[%i] = {",n);
        for (int i=0; i < n; i++) {
        fprintf(PDEar,"%i,",arr[i]);
        cout << arr[i] << " ";
        }
        fprintf(PDEar,"}\n");
        getch();
        system("cls");
        break;

        case 2:
        cout << "El arreglo sin ordenar es: ";
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        } 
        cout << endl;
        Burbuja2(arr, n);
        cout << "El arreglo invertido es: ";
        fprintf(PDEar,"\nEl arreglo invertido es -> arr[%i] = {",n);
        for (int i=0; i < n; i++) {
        fprintf(PDEar,"%i,",arr[i]);
        cout << arr[i] << " ";
        }
        fprintf(PDEar,"}\n");
        getch();
        system("cls");
        break;

        case 3:
        printf("Saliendo");
        k = 1;
        delay(2);
        break;

        default:
        printf("opcion no valida, por favor ingresa otra opcion");
        system("cls");
        break;
    }
        }
    return 0;
}