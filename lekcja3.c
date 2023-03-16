#include <stdio.h>
#include <stdlib.h>
void zad2_2_1(){
    int bezwzgl(int n){
        if(n<0){
            n *= -1;
        }
        return n;
    }
    int n, x;
    scanf("%d", &n);
    x = bezwzgl(n);
    printf("%d", x);
}
void zad2_2_3(){
    int func(int n){
        for (int i = n/2; i > 0; i--){
            if (n % i == 0){
                return i;
            }
        }
    }
    int n;
    scanf("%d", &n);
    if (n>2){
        printf("%d", func(n));
    }
}
int zad2_2_7(int a, int b){
    if (a == 0 || b == 0){
        return 0;
    }
    return pow(a, b);
}
void zad2_2_11(){
    double pierw(n){
    return sqrt(n);
    }
    double sum(n){
        double suma = 0;
        for(int i = 0; i<=n; i++){
            suma += pierw(i);
        }
        return suma;
    }
    int n, suma;
    scanf("%u", &n);
    printf("%lf", sum(n));}
void zad2_2_17(){
    int n = 0;
    void func(){
        n+=1;
    }
    for(int i = 0; i < 10; i++){
        func();
    }
    printf("%d", n);
}

void zad2_2_19(){
    int n, suma=0;
    int func(int n){
        return n;
    }
    for (int i = 0; i < 10; i++){
        scanf("%d", &n);
        suma+=func(n);
        printf("%d", suma);
        printf("\n");
    }

}

int zad2_2_23(n){
    if (n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return zad2_2_23(n-1)+zad2_2_23(n-2);
}

int zad2_2_28(int n, int m){
    if (m == 0){
        return n;
    }
    else if(n >= m && m > 0){
        return (n - m + zad2_2_28(n-1,m) + zad2_2_28(n, m-1));
    }
    return zad2_2_28(m, n);
}

int main()
{
    zad2_2_19();
}
