#include <stdio.h>
#include <stdlib.h>

void dodajJeden(int *a, int *b){
    a=a+1;
    b=b+1;
    printf("%d %d\n",*a,*b);
}


int main()
{
    int zmienna = 5;
    int *wskaznikZmiennej = &zmienna;
    *wskaznikZmiennej = 6;
    printf("Wartosc zmiennej %d\n", zmienna);
    printf("Adres zmiennej %p\n",wskaznikZmiennej);

    int a = 5;
    int b = 6;
    printf("%d %d\n",a,b);
    dodajJeden(&a,&b);
    printf("%d %d\n",a,b);

    int * a;         // <-
    printf("%d",*a); // <- to jest niezaliczenie!

    int * wsk = malloc(sizeof(int)); // alokowanie pamięci dla wskaźnika
    int * tab = malloc(sizeof(int)*10); // zarezerwowanie tablicy
    tab[0] = 1;
    tab[1] = 5;

    int * tab1 = malloc(sizeof(int));
    *tab1 = 6;
    tab = malloc(sizeof(int))
    free(tab1) // funkcja zwalniająca pamięć 

    return 0;
}
