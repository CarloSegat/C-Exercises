/* scanf example */
#include <stdio.h>

int main ()
{
  char str [80];  //array of 79characters + \0
  int i;

  printf ("Enter your family name: ");
  scanf ("%79s",str);
  //s is a specifier making the reading stop at the first whitespace.

  printf ("Enter your age: ");
  scanf ("%d",&i);
  printf ("Mr. %s , %d years old.\n",str,i);
  printf ("Enter a hexadecimal number: ");
  scanf ("%x",&i);
  printf ("You have entered %#x (%d).\n",i,i);
  //# format as hex
  return 0;
}

/* A format specifier for scanf follows this prototype:

               %[*][width][length]specifier */
