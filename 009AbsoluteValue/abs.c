//Program to get absolte value of a  number
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int abs(int a);

int main(int argc, char *argv[]) {  //char *argv[] == pointer to array of characters
    //method declaration
    int abs(int a){
        if (a>=0){
            return(a);
        }else{
            return (a*-1);
        }
    }

    if(!(argc==2)){
        printf("Call with one int\n");
        exit(1);
    }else{
        char remains[strlen(argv[1])];
        //an array of size == to input to store cut part
        int a = strtol(argv[1], &remains, 10);
        printf("The bsoulte value is %d\n", abs(a));
    }
}
