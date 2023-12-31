/* preprocessed statement */
#include<stdio.h>

/* code */
int main(int argc, char const *argv[])
{
    /* variable declaration */   
    int a, b;
    /* input */
    printf("enter number a ");
    scanf("%d", &a);

    printf("enter number b ");
    scanf("%d", &b);

    /* arithmetic operation */
    printf("a + b = %d\n", a+b );
    printf("a - b = %d\n", a-b );
    printf("a * b = %d\n", a*b );
    printf("a / b = %d\n", a/b );
    printf("a modulus b = %d\n", a%b );
    /* rational operations */
    printf("a = b = %d\n", a==b ); /* equals to */
    printf("a < b = %d\n", a<b ); /* greater */
    printf("a > b = %d\n", a>b); /* smaller */
    printf("a <= b = %d\n", a<=b); /* greater or equals to */
    printf("a >= b =%d\n", a>=b); /* smaller or equals to */
    /* logic operations */
    printf("a && b = %d\n", a&&b); /* and (for both true it gives true)*/
    printf("a || b = %d\n", a||b); /* or (for any true it gives true)*/
    printf("a ! b = %d\n", !a&&b); /* not (for true it gives false and vice versa)*/
    
    return 0;
}