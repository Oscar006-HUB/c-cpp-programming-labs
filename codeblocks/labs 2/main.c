#include <stdio.h>
#include <stdlib.h>

int main()
{

    char initial = 'G';
    //int auto = 10;
    int app =12;
    app=10;

   int a=13;
   int b=17;
   int c =a+b;
   //performing arthemtric
   int multiple=a*b;
   int divide=a/b;
   int sub = a-b;
   int mudulo=a%b;
   // Creating two new sets of integer variables (d and e) with numbers assigned to each.
 int d= 20;
 int e=35;
   d+=e;
   d-=e;
   d*=e;
    printf("G\n");
   d/=e;
   d%=e;

 printf("Sum (c): %d\n", c);
    printf("Multiplication: %d, Division: %d\n", multiple, divide);
    printf("Final value of d: %d\n", d);
    return 0;
}
