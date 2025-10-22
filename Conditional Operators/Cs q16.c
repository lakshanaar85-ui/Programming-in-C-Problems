#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n%2==0 && n%5==0 && n%8!=0) printf("Yes");
    else printf("No");
    return 0;
}