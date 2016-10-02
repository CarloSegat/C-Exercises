#include <stdio.h>
int main(void){
    //0 is FALSE 0 is FALSE
    char onoff[3] = "on";
    printf("onoff variable is: %s\n", onoff);

    int a = (!(strcmp(onoff, "on"))) ? 100 : 0;
    printf("the compoarison returned %d\n", strcmp(onoff, "on"));

    printf("The variable == %d\n", a);

    //is semantically equivalent to

    if(!(strcmp(onoff, "on"))) {
     a = 100;
    } else {
     a = 0;
    }
    printf("The variable == %d\n", a);
}
