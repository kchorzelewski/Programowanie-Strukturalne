#include <stdio.h>
#include <stdlib.h>
#include <math.h> void a1_2_8(){
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
    double srednia = (a+b+c)/3.0f;
    printf("%lf\n",srednia);
} void zad1_2_9(){
    int wejscie; // przepełnienie zmiennych
    scanf("%u", &wejscie);
    printf("%u", wejscie);
} void zad1_2_10(){
    double wejscie;
    scanf("%lf", &wejscie);     double pierwiastek = fabs(wejscie);
    printf("%lf", pierwiastek);
} void zad1_2_11(){
    double wejscie;
    scanf("%d", &wejscie);
    printf("%c", wejscie);
} void func(){
    printf("Napis zawierajacy rozne dziwne znaczki // \\ \\ $ & %%"); // % i \ trzeba zapisywać tak %% i \\;
    printf("Bardzo\n"
           "Dlugi\n"
           "Napis\n");
    int wejscie;
    double wejscie2;
    scanf("%lf",&wejscie2); // % - znak kontrolujący, format %d oznacza liczbę całkowitą i adres zmiennej do której zapiszemy
    printf("%lf", wejscie2); // przy scanf używamy & a przy prinf już nie     int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    printf("%d %d %d",a,b,c);
    printf("%d");
} void func1(){
} int main()
{
    zad1_2_11();     return 0;
}
