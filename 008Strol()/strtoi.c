#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[30] = "1: How much 500 is?2";
   //1 is extracted by strtol()
   //assign a string to a char array can only be done when the array is declared

   char str2[30] = "How much 500 is?2";
   //strol() CANNOT EXTRACT 2


   char *cutString;
   //declaring a pointer
   long ret;

   ret = strtol(str, &cutString, 10);
   //strtoi(sourceString, locationForCutString, base)
   //only number
   printf("The number(unsigned long integer base 10) is %ld\n", ret);
   printf("String part cut is |%s|\n\n", cutString);

   ret = strtol(str2, &cutString, 10);
   printf("The number(unsigned long integer base 10) is %ld\n", ret);
   printf("String part cut is |%s|", cutString);





   return(0);
}
