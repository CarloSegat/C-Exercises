#include <stdio.h>
#include <string.h>
int main(void){

    char input;
    char decision;

    //White space (such as blanks, tabs, or newlines) in the format string match
    //any amount of white space, including none, in the input.
    printf("Digit u or l\n");
    scanf(" %c", &decision);

    //to compare characters you don't need strcmp()
    if (decision == 'u') {
        printf("Give me an uppercase char\n" );
        scanf(" %1c", &input);
        input += 32;
    } else if (decision == 'l') {
        printf("Give me a lowercase char\n");
        scanf(" %1c", &input);
        input -= 32;
    } else {
        printf("You dunno hw digit\n");
    }

    printf("%c\n", input);

}
