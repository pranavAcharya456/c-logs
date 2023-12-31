#include <stdio.h>
int main()
{
    int a;
    float b;
    printf(" enter the whole number ");
    scanf("%d", &a);

    printf(" enter the integer ");
    scanf("%f", &b);

    printf("%d * %f = %3f\n", a, b, (a*b));
    /*%30f it defines to store a value after 30 space*/

    printf("there is 7 space with only 3 after decimal value %10f\n", b);
    /*%7.6f it defines 7 space and to only store 3 values after decimal*/
      
    return 0;
    /*it can be also used as %30d, %90f, %21c etc here value 30, 90, 21 define the space*/
}

