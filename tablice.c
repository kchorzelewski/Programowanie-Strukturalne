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

 int zad4_2_10_c(int n, int tab[n]){
    int max_index = 0;
    int max = tab[0];
    for (int i = 1; i < n; i++){
        if (tab[i] > max){
            max = tab[i];
            max_index = i;
        }
    }
    return max_index;
 }
int zad4_2_10_d(int n, int tab[n]){
    int min_index = 0;
    int min = tab[0];
    for (int i = 1; i < n; i++){
        if (tab[i] < min){
            min_index = i;
            min = tab[i];
        }
    }
    return min;
 }
 int zad4_2_10_e(int n, int tab[n]){
    int max = tab[0];
    for (int i = 1; i < n; i++){
        if (tab[i] < 0){
            tab[i] *= -1;
        }
        if (tab[i] > max){
            max = tab[i];
        }
    }
    return max;
 }

int zad4_2_10_f(int n, int tab[n]){
    int max_index = 0;
    int max = tab[0];
    for (int i = 1; i < n; i++){
        if (tab[i] < 0){
            tab[i] *= -1;
        }
        if (tab[i] > max){
            max_index = i;
            max = tab[i];
        }
    }
    return max_index;
 }

void zad4_2_12_a(int n, int tab[n]){
    int tab1[n];

    for (int i = 0; i < n; i++){
        tab1[i] = tab[n-(i+1)];
        printf("%d\n", tab1[i]);
    }
}

void zad4_2_12_b(int n, int tab[n]){
    int tab1[n];

    for (int i = 0; i < n-1; i++){
        tab1[i] = tab[i+1];
        printf("%d\n", tab1[i]);
    }
    tab1[n] = tab[0];
    printf("%d", tab1[n]);
}

void zad4_2_12_c(int n, int tab[n]){
    int tab1[n];
    tab1[0] = tab[n-1];
    printf("%d\n", tab1[0]);
    for (int i = 1; i < n; i++){
        tab1[i] = tab[i-1];
        printf("%d\n", tab1[i]);
    }
}

void zad4_2_12_d(int n, int tab[n]){
    int buffor;
    void sort(){
    for (int i = 1; i < n; i++){
        if (tab[i-1] > tab[i]){
            buffor = tab[i];
            tab[i] = tab[i-1];
            tab[i-1] = buffor;
        }
        printf("%d", tab[i-1]);
    }
    printf("%d\n", tab[n-1]);
    for (int i = 1; i < n; i++){
            if (tab[i-1] > tab[i]){
                sort();
                break;
            }
        }
    }
    sort();
}

void zad4_2_12_e(int n, int tab[n]){
    int buffor;
    void sort(){
    for (int i = 1; i < n; i++){
        if (tab[i-1] < tab[i]){
            buffor = tab[i-1];
            tab[i-1] = tab[i];
            tab[i] = buffor;
        }
        printf("%d", tab[i-1]);
    }
    printf("%d\n", tab[n-1]);
    for (int i = 1; i < n; i++){
            if (tab[i-1] < tab[i]){
                sort();
                break;
            }
        }
    }
    sort();
}



int main()
{
    int tab[5] = {1,2,3,4,5};
    int tab1[5] = {8,3,1,8,1};
    int tab2[5] = {1,1,1,1,1};
    zad4_2_12_e(5, tab1);
    return 0;
}
