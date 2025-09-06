#include <stdio.h>
#include <stdlib.h>

int main(){
    char dt = 'i'; // 'i' for int, 'f' for float, 'c' for char, 'd' for double
    printf("Enter data type (i: int, f: float, c: char, d: double): ");
    do{
        scanf("%c", &dt);
    }while(dt != 'i' && dt != 'f' && dt != 'c' && dt != 'd');
    int size = -1;
    printf("Enter number of elements: ");
    do{
        scanf("%d", &size);
    }while(size <= 0);
    void *p;

    switch (dt){
        case 'i':
            p = malloc(size * sizeof(int));
            break;
        case 'f':
            p = malloc(size * sizeof(float));
            break;
        case 'c':
            p = malloc(size * sizeof(char));
            break;
        case 'd':
            p = malloc(size * sizeof(double));
            break;
    }

    for(int i = 0; i < size; i++){
        printf("Enter value %d: ", i + 1);
        switch (dt){
            case 'i':
                scanf("%d", &((int*)p)[i]);
                break;
            case 'f':
                scanf("%f", &((float*)p)[i]);
                break;
            case 'c':
                scanf(" %c", &((char*)p)[i]);
                break;
            case 'd':
                scanf("%lf", &((double*)p)[i]);
                break;
        }
    }

    printf("You entered:\n");
    for(int i = 0; i < size; i++){
        switch (dt){
            case 'i':
                printf("%d\n", ((int*)p)[i]);
                break;
            case 'f':
                printf("%f\n", ((float*)p)[i]);
                break;
            case 'c':
                printf("%c\n", ((char*)p)[i]);
                break;
            case 'd':
                printf("%lf\n", ((double*)p)[i]);
                break;
        }
    }

    free(p);
}