//compile and the execute with the following line:
//$ if ./intmain.out; then echo "condition was true"; else echo "condition was false"; fi

//
//
#include <stdio.h>

int main(void)
{
	char c;

	printf("digit 0 or 1, I will return what you digited: ");
	c = getchar();

	if (c == '1') return 1;
	else return 0;
}
