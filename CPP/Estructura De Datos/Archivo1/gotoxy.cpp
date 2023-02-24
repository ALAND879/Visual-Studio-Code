#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <iostream>
using namespace std;

int gotoxy(int x, int y);

int gotoxy(int x, int y){
    HANDLE hCon;
    COORD dwPos;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    dwPos.X=x;
    dwPos.Y=y;
    SetConsoleCursorPosition(hCon,dwPos);
    return 0;
}

int main(){
for (int a = 1; a <= 30; a++)
{
    for (int i=1;i<=30;i++)
    {
    	gotoxy(i,a);
    	printf("*");
	}
}

for (int a = 2; a <= 29; a++)
{
    for (int i=2;i<=29;i++)
    {
    	gotoxy(i,a);
    	printf(" ");
	}
}
    
    getch();
}


