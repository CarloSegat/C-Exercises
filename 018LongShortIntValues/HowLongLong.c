#include <limits.h>
#include <stdio.h>

int main(void){
    long int test;
    short int test2;
    printf("The size of a long int is: %ld bytes,and a short: %ld\n",
    sizeof(test), sizeof(test2));
    printf("The max value of a long int is: %ld ,and a short: %ld\n", LONG_MAX, SHRT_MIN);
}
