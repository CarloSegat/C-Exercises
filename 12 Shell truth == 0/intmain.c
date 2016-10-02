#include <stdio.h>

int main(void)
{
	char c;

	printf("0 or 1? ");
	c = getchar();

	if (c == '1') return 1;
	else return 0;
}
