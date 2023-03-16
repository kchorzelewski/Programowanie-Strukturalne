#include <stdio.h>
#include <stdlib.h>
void zad1_3_1(){
    int n;
    scanf("%d",&n);
    if(n<0)
        n = n*-1;
    printf("%d", n);
}
void zad1_3_2(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>=b){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
}
void zad1_3_3(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b){
        if(c>=a){
            printf("%d",c);
    }
    else{
        printf("%d",a);
    }
    }
    else{
        if(b>=c){
            printf("%d",b);
    }
    else{
        printf("%d", c);
    }
    }}
void zad1_3_4(){
    int a, b;
    scanf("%d %d",&a, &b);
    if(a<0)
        a = a*-1;
    if(b<0)
        b = b*-1;
    if(a>=b){
        printf("%d",a);
    }
    else{
        printf("%d", b);
    }
}
void zad1_3_7(){
    double a, b, c, delta;
    scanf("%lf %lf %lf",&a,&b,&c);
    delta = b*b-4*a*c;
    if(delta==0){
        printf("%lf",-b/(2*a));
    }
    else if(delta>0){
            printf("%lf\n",(-b-sqrt(delta))/(2*a));
        printf("%lf",(-b+sqrt(delta))/(2*a));
    }
    else{
        printf("delta jest ujemna, brak rozwiazan");
    }
}
void zad1_4_1(){
    int n, m, wynik;
    scanf("%d %d", &n, &m);
    printf("0");
    while(wynik<m)
    {wynik+=n;
    if(wynik<m){
            printf(",");
    printf("%d",wynik);
    }
    }
}
void zad1_4_2(){
    int n, m, wynik=0;
    scanf("%d %d", &n, &m);
    printf("0");
    for(int i = 0; i < m-1; i++)
    {
        printf(",");
    wynik+=n;
    printf("%d",wynik);
    }
}
void zad1_4_5(){
    int n, suma=0;
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        suma+=n*n;
    }
    printf("%d", suma);
}
void zad1_4_7(){
    int n, m, suma;
    scanf("%d %d", &n, &m);
    suma = m;

    for (int i = n; i<m; i++){
        suma *= i;
    }
    printf("%d", suma);
}
void zad1_4_6(){
    int n, suma=1;
    scanf("%d", &n);
    for(int i = 2; i<=n; i+=2){
        suma *= i;
    }
    printf("%d", suma);
}

int main()
{
    return 0;
}
