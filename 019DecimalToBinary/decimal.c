#include <stdio.h>

//every iteration will add a figure to the number, that is to say that
//every time a decimal number is divisible by 2 the binary equivalent will be
//1 figure longer.
unsigned int_to_bin(unsigned k) {
    if (k == 0) return 0;
    if (k == 1) return 1;
    return (k % 2) + 10 * int_to_bin(k / 2);
}
int main(void){
    printf("%d\n", int_to_bin(7));
    printf("%d\n", (4 /2));
}
