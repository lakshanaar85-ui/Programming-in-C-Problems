#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n%10%3==0) printf("Yes");
    else printf("No");
    return 0;
}