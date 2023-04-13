#include <stdio.h>
#include <stdlib.h>

double funkcja2(double (*fun)(int), int n){ // jak wygląda wskaźnik funkcji <--{
    return fun(n);
}
double zad3_2_13(int n){
    return n*3.0;
}



int main()
{
    double (*funkcjanowa) = zad3_2_13;
    printf("%lf\n", funkcja2(funkcjanowa, 3));
    return 0;
}
