#include <stdio.h>
int main() {
    char s[1000];
    int i, count = 0;
    scanf(" %[^\n]", s);
    for (i = 0; s[i]; i++)
        if ((s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\0') || (i == 0 && s[i] != ' '))
            count++;
    printf("%d", count);
    return 0;
}

