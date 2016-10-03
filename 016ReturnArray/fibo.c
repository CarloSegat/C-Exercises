//C doesn't allow function to return arrays.
//A function that wants to return an array must
//return a pointer

#include <stdio.h>
#include <stdlib.h>

int * returnStaticRef() {
    //we don't want to return an address of a local variable because
    //local variable are destroyed when out of scope, static variables are kept
    static int persistent[10] = {1,2,3,4,5,6,7,8,9,10};
    return (persistent);
}

int * returnAddressOfLocalVariable() {
    int local[3] = {0,1,2};
    printf("Value of the local pointer inside the function: %p\n", local);
    //%p is for pointers (aka addresses)
    return (local);
}

int main(void){
    printf("Value of the local pointer outside the function: %p\n",
    returnAddressOfLocalVariable());

    int * persistent = returnStaticRef();
    for (int index=0; index < 10; index++){
        printf("\nValue of %dst element of returned static array is: %d\n", index, persistent[index]);
    }


}
