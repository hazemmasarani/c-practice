#include<stdio.h>
#include<stdlib.h>

int main(){
    void* p;
    p = malloc(sizeof(int));
    printf("Address of p: %p\n", p);
    printf("Garbage value at p: %d\n", *(int*)p);
    *(int*)p = 99;
    printf("Value at p after assignment: %d\n", *(int*)p);

    printf("Float value at p (interpreted as float): %f\n", *(float*)p);

    printf("Value of p as char: %c\n", *(char*)p);
    printf("Value of p as double: %lf\n", *(double*)p);

    printf("Value of p after casting to float again: %f\n", (float) *(int*)p);

    return 0;

}