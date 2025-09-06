#include <stdio.h>
#include <stdlib.h>


void print_value(void* value, char type){
    switch (type){
        case 'i':
            printf("%d\n", *(int*)value);
            break;
        case 'f':
            printf("%f\n", *(float*)value);
            break;
        case 'c':
            printf("%c\n", *(char*)value);
            break;
        case 'd':
            printf("%lf\n", *(double*)value);
            break;
    }
}


int main(){
    int i = 42;
    float f = 3.14;
    char c = 'A';
    double d = 2.71828;

    print_value(&i, 'i');
    print_value(&f, 'f');
    print_value(&c, 'c');
    print_value(&d, 'd');

    return 0;
}