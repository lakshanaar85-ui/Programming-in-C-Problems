#include <stdio.h>
int main() {
    int n, i, key, index = -1;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            index = i;
            break;
        }
    }
    printf("%d", index);
    return 0;
}



