//Compiler directives are statment starting with #
//e.g. #define

#include <stdio.h>
#define RAT 55
//if
//#define FIRST
//is uncommented it will assign default values.

int main(int argc, char *argv[])
{
   printf("RAT is going to substituted into the defined int %d\n", RAT);
   int a, b, c = 0;

#ifdef FIRST
  a=2; b=6; c=4;
#else
  printf("Enter a:");
  scanf("%d", &a);

  printf("Enter b:");
  scanf("%d", &b);

  printf("Enter c:");
  scanf("%d", &c);
#endif
  printf("\na %d    b %d    c %d =", a, b, c);
}
