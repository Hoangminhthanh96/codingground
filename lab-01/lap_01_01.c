#include <stdio.h>
void main() 
{
int x = 13;
int y = 4;
printf("x + y = %d \n", x + y);
printf("x - y = %d \n", x - y); 
printf("x * y = %d \n", x * y); 
printf("x %% y = %d \n", x % y);
printf("x / y = %d \n", x / y);
double a = 11.7,
b = 3.5;
printf("a / b = %lf \n", a / b);
printf("x + a = %lf \n", x + a);
char c1 = 10;
unsigned char c2 = 200;
printf("c1 + c2 = %d \n", c1 + c2);
int i = 15;
printf("i = %d \n", i);
i = i - 1;
printf("i=i-1 : %d \n", i);
i--;
printf("i-- : %d \n", i);
i -= 1;
printf("i-=1 : %d \n", i);
}