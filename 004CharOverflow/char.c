
#include <stdio.h>

int main(void){
	int longer = 0x100; //12bits
	char  location;  //8bits

	location = longer;
	printf("\nContent of location is: %x\n", location);
	//output 0
}
