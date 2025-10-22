#include <stdio.h>

int main() {
    char c1, c2;
    scanf("%c %c", &c1, &c2);

    if(c1 == c2)
        printf("Equal\n");
    else
        printf("Not Equal\n");

    return 0;
}