#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void){
    static unsigned char ascii = 0;
    printf("%f\n", pow(2.0, sizeof(ascii)*8));
    for (ascii = 0;
         ascii < pow(2.0, 8) - 1;
         ascii++) {

        printf("The value %d is %c\n", ascii, ascii);
    }

    printf("The value %d is %c\n", ascii, ascii);
}
