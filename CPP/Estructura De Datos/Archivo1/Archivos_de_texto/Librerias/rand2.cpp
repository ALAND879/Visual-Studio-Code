#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <random>

int main(){
int a,b,Random_number;
srand(time(NULL));

for (int i = 0; i < 9; i++)
{
    printf("%d\n", rand()%50);
}
return 0;
}




