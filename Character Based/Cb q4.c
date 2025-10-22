#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if(isdigit(ch))
        printf("Digit\n");
    else
        printf("Not Digit\n");

    return 0;
}