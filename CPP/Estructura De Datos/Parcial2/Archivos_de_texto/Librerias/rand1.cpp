#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <random>

int main(){
int i,Random_number;
srand(time(NULL));
i = rand()%50;
printf("%d", i);
return 0;
}




