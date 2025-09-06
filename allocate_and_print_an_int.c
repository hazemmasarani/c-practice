#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = (int*)malloc(sizeof(int));
    *p = 42;
    printf("Value of p: %d\n", *p);
    printf("Address of p: %p\n", p);
    free(p);
    return 0;
}