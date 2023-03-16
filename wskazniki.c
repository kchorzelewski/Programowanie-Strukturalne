#include <stdio.h>
#include <stdlib.h>

int x = 1;
int y = &x;
int *z = &x;
printf("%d\n", x);  // 1
// printf("%d\n", *x);
printf("%d\n", &x); // 6422044
printf("%d\n", y);  // 6422044
// printf("%d\n", *y);
printf("%d\n", &y); // 6422040
printf("%d\n", z);  // 6422044
printf("%d\n", *z); // 1
printf("%d\n", &z); // 6422032
