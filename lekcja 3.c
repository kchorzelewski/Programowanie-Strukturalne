#include <stdio.h>
#include <stdlib.h>

int zad3_2_1(int *a, int *b){
    if(a<=b){
        return a;
    }
    return b;
}

int *zad3_2_2(int *a, int *b){
    printf("%d %d\n", &a, &b);
    int a1 = &a;
    int b1 = &b;
    if(&a<=&b){
        return a1;
    }
    return b1;
}

int zad3_2_5(const int *b, const int *a){
    int a1 = a;
    int b1 = b;
    return a1+b1;
}

void zad3_2_6(int n, int *w){
    w=&n;
    printf("%d %d",*w,n);
}

int zad3_2_9(){
    int *wsk = malloc(sizeof(int));
    return wsk;
}

int zad3_2_11(int n){
    int *tab = malloc(sizeof(int)*n);
    return tab;
}

int zad3_2_12(int n){
    double *tab = malloc(sizeof(double)*n);
    return tab;
}

int zad3_2_15(const int *n, int *m){
    m = n;
    return m;
}




int main()
{
    printf("%d", zad3_2_15(6, 4));
    return 0;
}
