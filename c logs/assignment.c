
#include <stdio.h>
int main()
{
    int a, i;

    printf("enter the number: - ");
    scanf("%d", &a);

    printf("the multiplication table is \n");

    for ( i = 1; i<=10; i++)
    {
    printf("%d * %d = %d\n", a, i, (a*i));
    }                                       
    return 0;
}
