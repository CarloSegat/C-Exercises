#include <stdio.h>
#include <stdlib.h>


int main(void)
{
        long x;
        char s[10];
        printf("Give number\n")

        ;
        scanf("%ld", &x);


        printf("Decimal : %d\t octal %o\t ", x, x);
        printf("hex: %x\tunsigned: %u\t", x, x);
        printf("char: '%c'\n", x);
        printf("\nLONG VERSION\n");
        printf("Decimal : %ld\t octal %lo\t", x, x);
        printf("hex: %lx\tunsigned: %lu\n",  x, x);
        return 0;
}
