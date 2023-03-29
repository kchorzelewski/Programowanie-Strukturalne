#include <stdio.h>
#include <stdlib.h>

double func(int m){ // funkcja do zadania 3_2_12
    return m;
}

double zad3_2_13(double (*func)(int m), int n){
    return func(n);
}

bool zad3_2_14()


int main()
{
    printf("%lf", zad3_2_13(func, 3));
    return 0;
}
