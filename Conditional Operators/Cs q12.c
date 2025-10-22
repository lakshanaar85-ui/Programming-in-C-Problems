#include <stdio.h>
int main() {
    int n,l;
    scanf("%d",&n);
    l=n%10;
    if(l%2==0) printf("Even");
    else printf("Odd");
    return 0;
}