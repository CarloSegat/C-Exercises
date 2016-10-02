#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[30] = "200 This is test";
   char *ptr;
   long ret;

   ret = strtol(str, &ptr, 10);
   //strtoi(sourceString, locationForRemain, base)
   printf("The number(unsigned long integer) is %ld\n", ret);
   printf("String part is |%s|", ptr);

   return(0);
}
