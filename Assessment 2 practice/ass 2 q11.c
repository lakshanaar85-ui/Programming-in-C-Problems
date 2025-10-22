#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    int i, j, found = 0;
    scanf("%s", s);
    for (i = 0; s[i]; i++) {
        for (j = i + 1; s[j]; j++) {
            if (s[i] == s[j]) {
                printf("%c", s[i]);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    if (!found) printf("-1");
    return 0;
}