#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if(isupper(ch))
        printf("Uppercase\n");
    else if(islower(ch))
        printf("Lowercase\n");
    else if(isdigit(ch))
        printf("Digit\n");
    else
        printf("Special Symbol\n");

    return 0;
}