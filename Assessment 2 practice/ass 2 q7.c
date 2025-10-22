#include <stdio.h>
#include <ctype.h>
int main() {
    char s[1000];
    int v = 0, c = 0, i;
    scanf(" %[^\n]", s);
    for (i = 0; s[i]; i++) {
        char ch = tolower(s[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
        }
    }
    printf("%d %d", v, c);
    return 0;
}
