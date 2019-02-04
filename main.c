#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int suma(int x[20][20]){
    int s;
    return s;
}

float priemer(int m[20][20]){

    float pr;
    return pr;
}

int main()
{
    int m[20][20];

    srand(time(NULL));   // Initialization, should only be called once.
    for(int i=0;i<20;i++){
        for(int j=0; j<20; j++)
            m[i][j] = rand()%100;
    }



    return 0;
}
