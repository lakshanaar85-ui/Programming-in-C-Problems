#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n], i;
    float sum = 0;
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("%.2f %.2f", sum, sum / n);
    return 0;
}

