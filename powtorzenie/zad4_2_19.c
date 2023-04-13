#include <stdio.h>
#include <stdlib.h>

double funkcja2(double (*fun)(int), int n){ // jak wygląda wskaźnik funkcji <--{
    return fun(n);
}
double zad3_2_13(int n){
    return n*3.0;
}

int f1(int n, int tab[]){
    int wynik=0;
    for (int i = 0; i<n; i++){
        if(tab[i]){
            wynik+=1;
        }
    }
    int *tab2 = malloc(sizeof(int)*wynik);
    int index = 0;
    for (int i = 0; i < n; i++){
        if (tab[i] != 0){
            tab2[index++]=tab[i];
        }
    }
    return tab2;
}


int main()
{
    int tab1 = {5,0,4,3,-1,0};
    int tab2 = f1(6, tab1);

    for (int i = 0; i < 6; i++){
        printf("%d\n",tab2[i]);
    }
    return 0;
}
