#include <stdio.h>

struct arr {
    char *array;
    int size;
};

int arrsize(int size){
    return size;
}

int main(void)
{
    char a[] = "hi there";
    printf("%d\n", arrsize(sizeof(a)/sizeof(a[0])));

}
