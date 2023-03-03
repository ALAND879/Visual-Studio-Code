#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
char pal[20];

printf("Digite una palabra");
scanf("%s", &pal);

fflush(stdin);

for (int i = 0; i < strlen(pal); i++)
{
    printf("%c", pal);
}


}