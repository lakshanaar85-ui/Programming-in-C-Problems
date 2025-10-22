#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s[1000];
    int i, j, flag = 1;
    scanf("%s", s);
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        if (tolower(s[i]) != tolower(s[j])) {
            flag = 0;
            break;
        }
    }
    if (flag) printf("Yes");
    else printf("No");
    return 0;
}
