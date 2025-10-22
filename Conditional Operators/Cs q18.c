#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n>=0 && n<=9) printf("Single");
    else if(n>=10 && n<=99) printf("Two");
    else if(n>=100 && n<=999) printf("Three");
    else printf("Other");
    return 0;
}