#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <random>

using namespace std;
int juego_facil(), juego_medio(),juego_dificil(), jugar();
void delay();
int llenar_tablero(int tamano);
void mostrar_tablero(int tamano2);
int juego[21][21];
int gotoxy(int x, int y);
int x=6,y=3;
int numero_de_bombas=0, numero_de_vacios=0;
int c1, c2;

//!Revisar todo el apartado "Barrer", no esta bien completado
/*
int barrer_arriba_derecha(int f, int col);
int barrer_derecha_abajo(int f, int col); 
int barrer_abajo_izquierda(int f, int col);
int barrer_izquierda_arriba(int f, int col);
se puede cambiar por un barrido solamente superior, solamente derecha y solamente izquierda, que se realize en bucle, limitando el lado opuesto del inicial 
*/

void delay(int secs) {for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));}

int gotoxy(int x, int y){
    HANDLE hCon;
    COORD dwPos;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    dwPos.X=x;
    dwPos.Y=y;
    SetConsoleCursorPosition(hCon,dwPos);
    return 0;
}

//!Revisar todo el apartado "Barrer", no esta bien completado
/*
int barrer_arriba_derecha(int f, int col){
    if (juego[f][col] == 2)//No es bomba
    {
        gotoxy(f,col);
        cout<<" ";
        barrer_arriba_derecha(f,col-1);
        barrer_arriba_derecha(f+1,col);
        return f;
        return col;
    }
    else{
        return f;
        return col;
    }
}

int barrer_derecha_abajo(int f, int col){
    if (juego[f][col] == 2)//No es bomba
    {
        gotoxy(f,col);
        cout<<" ";
        barrer_derecha_abajo(f+1,col);
        barrer_derecha_abajo(f,col+1);
        return 0;
    }
    else{
        return 0;
    }
}

int barrer_abajo_izquierda(int f, int col){
    if (juego[f][col]==2)
    {
        gotoxy(f,col);
        cout<<" ";
        barrer_abajo_izquierda(f,col+1);
        barrer_abajo_izquierda(f-1,col);
        return 0;
    }
    else{
        return 0;
    }
}

int barrer_izquierda_arriba(int f, int col){
    if (juego[f][col]==2)
    {
        gotoxy(f,col);
        cout<<" ";
        barrer_izquierda_arriba(f-1,col);
        barrer_izquierda_arriba(f,col-1);
        return 0;
    }
    else{
        return 0;
    }
}
*/


int main(){
    int dificultad=0;
    system("color 0B"); // da color a las letras en la consola

    cout << "Bienvenido a Buscaminas" << endl;
    cout << "MENU: \n1.-Facil(5x5)\n2.-Intermedio(10*10)\n3.-Dificil(20x20)\n4.-Salir\nIngresa una opcion: ";
    cin >> dificultad;

        while (dificultad != 1 && dificultad != 2 && dificultad != 3 && dificultad != 4){
            system("cls");
            cout<<"Ingresa una opcion valida de juego";
            delay(4);
            system("cls");
            cout << "Bienvenido a Buscaminas" << endl;
            cout << "MENU: \n1.-Facil(5x5)\n2.-Intermedio(10*10)\n3.-Dificil(20x20)\n4.-Salir\nIngresa una opcion: ";
            cin >> dificultad;
        }

    system("cls");
    switch (dificultad){

        case 1:
            juego_facil();
            getch();
    
            jugar();
            system("cls");
            cout<<"Presiona para salir";
            delay(5);
            getch();
        break;
    
        case 2:
            juego_medio();
            getch();
            jugar();
            cout<<"Presiona para salir";
            getch();
        break;
    
        case 3:
            juego_dificil();
            getch();
            jugar();
            cout<<"Presiona para salir";
            getch();
        break;
    
        case 4:
            system("cls");
            cout<<"\n\nGracias por jugar :)";
            delay(3);
        break;
    
    }

}

//modo de juego 1
int juego_facil(){
    
    llenar_tablero(4);
    cout<<"\nPara desplazarte usa las flechas en el teclado, presiona enter cuando llegues al lugar deseado, empiezas en la esquina superior izquierda.\n\n";
    mostrar_tablero(4);
    return 0;
}

//modo de juego 2
int juego_medio(){
    
    llenar_tablero(9);
    cout<<"\nPara desplazarte usa las flechas en el teclado, presiona enter cuando llegues al lugar deseado, empiezas en la esquina superior izquierda.\n\n";
    mostrar_tablero(9);
    return 0;
}

//modo de juego 3
int juego_dificil(){
    
    llenar_tablero(19);                   
    cout<<"\nPara desplazarte usa las flechas en el teclado, presiona enter cuando llegues al lugar deseado, empiezas en la esquina superior izquierda.\n\n";
    mostrar_tablero(19);
    return 0;
}

//llena el tablero con 0 y 1 para determinar si hay minas o no
int llenar_tablero(int tamano){

    int a,b,Random_number;
    srand(time(NULL));

    //se realiza esto para tener un control de todos los elementos del arreglo, asignando un valor de 5.
    for (int i = 0; i <= 21; i++) {
        for (int j = 0; j <= 21; j++) {
            juego[i][j] = 5;
        }
    }

//llena el tablero de juego con 0 y 1, es decir si tiene o no minas
    for(a=0;a<=tamano;a++){
        for(int b=0;b<=tamano;b++){
            Random_number = 1 + rand()%2;
                if (Random_number == 2)  { numero_de_vacios = numero_de_vacios + 1;  }
                else if (Random_number == 1)  { numero_de_bombas = numero_de_bombas + 1; }
            juego[b][a] = Random_number;
            Random_number=0;
        }
    }
    return 0;
}

//imprime el tablero en la consola
void mostrar_tablero(int tamano2){
    
    //muestra el tablero en 0s y 1s
    cout<<"\t";
    for(int a=0;a<=tamano2;a++){
        for(int b=0;b<=tamano2;b++){
            cout<<juego[b][a];//!cambiar por el tablero
        }
        cout<<"\n\t";
    }
}

//detecta la tecla presionada
int jugar(){
bool acabar_juego = false;
int c = _getch();
numero_de_vacios = numero_de_vacios-5;
do{// Espera para acabar el juego por tecla especial, total de bombas limpias o explosión
    int c = _getch();
        while (c != 13 && c !=32){//Espera un enter
        if (c == 224 || c == 0)    {c = _getch();}// Si se presionó una flecha, leer la siguiente tecla (que contiene el resto del código)
            // Mostrar el codigo ASCII de la tecla presionada
                switch (c){

                    case 72://movimiento flecha hacia arriba
                        y=y-1;
                        gotoxy(x,y);
                        c = _getch();
                    break;

                    case 80://movimiento flecha hacia abajo
                        y=y+1;
                        gotoxy(x,y);
                        c = _getch();
                    break;

                    case 75://movimiento flecha hacia la izquierda
                        x=x-1;
                        gotoxy(x,y);
                        c = _getch();
                    break;

                    case 77://movimiento Flecha hacia la derecha
                        x=x+1;
                        gotoxy(x,y);
                        c = _getch();
                    break;

                    default://tecla no reconocida
                    c = _getch();
                    break;
                }
    }

    if(c == 13){
    //?Revisar si la casilla en la posición actual tiene o no una bomba 
        c1=x, c2=y;
        c1=c1-8;
        c2=c2-4;
            //Sin Bomba //!Se necesita agregar la limpieza de bombas al rededor y poner en las orillas las bombas cercanas
            if (juego[c1][c2] == 2){ 
                cout<<" ";//limpia la bomba encontrada
                //!Revisar Todo este apartado
                /*
                barrer_arriba_derecha(c1, c2);
                barrer_derecha_abajo(c1, c2); 
                barrer_abajo_izquierda(c1, c2);
                barrer_izquierda_arriba(c1, c2);
                */
                numero_de_vacios=numero_de_vacios-1; // le dice al código que se ha limpiado una bomba del total
                if(numero_de_vacios==0){acabar_juego = true;
                cout<<"Excelente, limpiaste todo el tablero";
                delay(5);
                } 
            }

            //*Acabar Juego por bomba
            else if(juego[c1][c2] == 1){
                cout<<"*";
                delay(1);
                system("cls");
                cout<<"Has descubierto una bomba\nGracias por jugar :)";
                delay(4);
                acabar_juego = true;
            }
    }

    //*Acabar Juego con la tecla espacio
    if (c == 32 ){
        acabar_juego = true;
        system("cls");
        cout<<"Gracias por Jugar";
        delay(2);
    }

}while (acabar_juego == false);

    return 0;
}

