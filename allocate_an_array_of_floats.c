#include <stdio.h>
#include <stdlib.h>

int main (){
    float* p = (float*) malloc(sizeof(float)*5);
    p[0] = 1.1;
    p[1] = 2.2;
    p[2] = 3.3;
    p[3] = 4.4;
    p[4] = 5.5;
    for(int i=0; i<5; i++){
        printf("Value of p[%d]: %f\n", i, p[i]);
        printf("Address of p[%d]: %p\n", i, &p[i]);
    }
}