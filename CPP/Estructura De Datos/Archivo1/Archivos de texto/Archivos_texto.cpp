#include <stdio.h>
#include <conio.h>

int main(){
    FILE*fd;
    fd = fopen("prueba.txt", "a");

    /*if(fd=NULL){
        cout<<"No se puede crear el archivo";
        system("cls");
    } 
    else {
        cout<<"Se creo correctamente";
        system("cls");
    }*/
	
    
    char nombre[20];
    int edad;

    printf("Proporciona el nombre: ");
    scanf("%s", &nombre);
    fprintf(fd,"%s \t",nombre);

    printf("\nProporciona la edad: ");
    scanf("%d", &edad);
    fprintf(fd,"%d \n",edad);
    
	fclose(fd);
	

    int c;
	fd = fopen("prueba.txt", "rt");

	while ((c=fgetc(fd))!=EOF) {
        putchar(c);
    }
    getch();
    //getch();
	fclose(fd);
	return 0;
}
