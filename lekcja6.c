#include <stdio.h>
#include <stdlib.h>

int *zad4_2_14(int n){
    double tab[n];
    int *a = &tab[0];
    return a;
}

int zad4_2_16(int tab[]){
    int *a = tab;
    free(a);
    return tab;
}



int main()
{
    //int * wsk = malloc(sizeof(int))*10
    double tab[] = {1,2,3};
    printf("%d", zad4_2_16(tab));
    return 0;
}

