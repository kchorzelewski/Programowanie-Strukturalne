#include <stdio.h>
#include <stdlib.h>

int zad4_2_2_a(int n, int tab[]){
    int suma = 0;
    for (int i = 0; i < n; i++){
        suma += tab[i];
    }
    return suma/n;
}

int zad4_2_2_b(int n, int tab[]){
    int suma = 0;
    for (int i = 0; i < n; i++){
        suma += tab[i];
    }
    return suma;
}

int zad4_2_2_c(int n, int tab[n]){
    int suma = 0;
    for (int i = 0; i < n; i++){
        suma += tab[i]*tab[i];
    }
    return suma;
}

int zad4_2_3(int n, const int tab[n]){
    int suma = 0;
    for (int i = 0; i < n; i++){
        suma += tab[i];
    }
    return suma/n;
}

void zad4_2_6_a(int n, int tab1[n], int tab2[n]){
    tab2 = tab1;
}

void zad4_2_6_b(int n, int tab1[n], int tab2[n]){
    for (int i = 0; i < n; i++){
        tab2[i] = tab1[n-(i+1)];
    }
}

 void zad4_2_9(int n, int tab1[n], int tab2[n], int tab3[n]){
     for (int i = 0; i < n; i++){
        if (tab1[i] <= tab2[i]){
            tab1[i] = tab2[i]+1;
        }
        if (tab3[i] >= tab2[i]){
            tab3[i] = tab2[i]-1;
        }
     }
     for (int i = 0; i < n; i++){
        printf("%d", tab1[i]);
     }
 }

 int zad4_2_10_a(int n, int tab[n]){
    int max = tab[0];
    for (int i = 1; i < n; i++){
        if (tab[i] > max){
            max = tab[i];
        }
    }
    return max;
 }

 int zad4_2_10_b(int n, int tab[n]){
    int min = tab[0];
    for (int i = 1; i < n; i++){
        if (tab[i] < min){
            min = tab[i];
        }
    }
    return min;
 }




int main()
{
    int tab[5] = {1,2,3,4,5};
    int tab1[5] = {3,4,5,6,7};
    int tab2[5] = {1,1,1,1,1};
    zad4_2_9(5, tab, tab1, tab2);
    //printf("%d", zad4_2_3(5, tab));
    return 0;
}
