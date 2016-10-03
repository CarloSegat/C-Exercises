#include <stdio.h>
#include <stdlib.h>

int * returnArray() {
    static int persistent[5] = {1,2,3,4,5};
    return (persistent);
}


int main(void){

    int * persistent = returnArray();
        int foolsSize = sizeof(persistent) / sizeof(persistent[0]);
        //sizeof(array) returns the expected ammoutn of bytes occupied
        //by the array only if the array is not a reference.
        //Since persistent  gets the value returned by a function,
        //using sizeof() on it will result is obtaining a pointer
        //size. The pointer "lose" consciusness of being an array pointer.
        printf("(WRONG) The size of the array is: %d, should be 5\n", foolsSize);


        int arr[5] = {1,2,3,4,5};
        int lenArr = sizeof(arr) / sizeof(arr[0]);
        printf("(RIGHT) The size of the array is: %d, should be 5\n", lenArr);
    }
