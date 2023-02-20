#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
using namespace std;
int z, i=0, clave;
float prom_acumulado=0, promf;

int main(){
	
	struct Persona{
		int ID;
		char Carrera[60];
		int Semestre;
		float promedio;
	}Per[10];
	
	
	for(int a=1;a<=1;){
		cout<<"1.- Registro\n";
		cout<<"2.- Buscar\n";
		cout<<"3.- Reporte\n";
		cout<<"4.- Salir\n";
		cin>>z;
		
		switch (z){
			
		case 1:
			cout<<"\nID: ";
			cin>>Per[i].ID;
	
			cout<<"\nCarrera: ";
			cin>>Per[i].Carrera;
	
			cout<<"\nSemestre: ";
			cin>>Per[i].Semestre;
				while (Per[i].Semestre != 1 && Per[i].Semestre != 2 && Per[i].Semestre != 3 && Per[i].Semestre != 4 && Per[i].Semestre != 5 && Per[i].Semestre != 6 && Per[i].Semestre != 7 && Per[i].Semestre != 8){
 				printf("El numero ingresado es incorrecto. Por favor, ingrese un numero entre 1, 2, 3, 4, 5, 6, 7 u 8: ");
 				cin>>Per[i].Semestre;
 				}
			cout<<"\nPromedio: ";
			cin>>Per[i].promedio;
			prom_acumulado=prom_acumulado+Per[i].promedio;
		i=i+1;
		cout<<"Gracias por el registro, presione enter para continuar";
		getch();
		system("cls");
			break;
			
		case 2:
		printf("\n\nIngresa el ID a buscar: ");
	cin>>clave;
	
	for(int m=0;m<=10;m++){
		if (clave==Per[m].ID){
			printf("Carrera: %s\n", Per[m].Carrera);
			printf("Promedio: %f\n", Per[m].promedio);
		}
	}
	cout<<"Gracias, presione enter para continuar";
		getch();
		system("cls");
			break;
			
		case 3:
		printf("\n");
	printf("ID \tCarrera  \tSemestre \tPromedio \n");
	printf("---------------------------------------------------------------------------\n");
	
	
	for(int r=0;r<i;r++){
	printf("%d\t", Per[r].ID);
	printf("%s\t", Per[r].Carrera);
	printf("%d\t", Per[r].Semestre);
	printf("%f\t", Per[r].promedio);
	printf("\n");
	}
	cout<<"Gracias, presione enter para continuar";
		getch();
		system("cls");
			break;
			
		case 4:
			a=a+100;
			promf=prom_acumulado/i;
		cout<<"El promedio ecumulado es: "<<promf<< "\nGracias, presione enter para continuar";
		getch();
		system("cls");
			system("cls");
			break;	
		
		default:
			cout<<"Ingresa un numero Valido\n";
			getch();
			system("cls");
				break;
			}
	}
	
}

