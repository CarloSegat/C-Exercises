#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void){
    static unsigned char ascii = 0; //from 0 to 255
    // pow(2.0, sizeof(ascii)*8)) == 256
    for (ascii = 0;
         ascii < pow(2.0, 8) - 1;
         //ascii will reach value 255 and then overflow to 0
         ascii++) {

        printf("The value %d is %c\n", ascii, ascii);
    }

    printf("The value %d is %c\n", ascii, ascii);
}
