//character case conversion 

#include <stdio.h>
#include <string.h>
int main(void){

    char input;
    char decision;


    printf("Digit u for converting from UPPERCASE\nl for converting from lowercase\n");
    //White space (such as blanks, tabs, or newlines) in the format string match
    //any amount of white space, including none, in the input.
    scanf(" %c", &decision);

    //to compare characters you don't need strcmp(), they are just a byte
    if (decision == 'u') {
        printf("Give me an uppercase char\n" );
        scanf(" %1c", &input);
        input += 32;
    } else if (decision == 'l') {
        printf("Give me a lowercase char\n");
        scanf(" %1c", &input);
        input -= 32;
    } else {
        printf("error\n");
    }

    printf("%c\n", input);

}
