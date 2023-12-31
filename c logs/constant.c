

/*we can state a constat by either a function "const" or using prerocessed statement "define" the value if changed or again defined throws an error */

#include <stdio.h>

// #define omega 6 

int main()
{
    const int omega=6;
    printf("tab space\t\t ,%d ,alarm sound , to print escape sequences \\n", omega);
    printf("\a");

    return 0;
}
