#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a%10==b%10) printf("Yes");
    else printf("No");
    return 0;
}