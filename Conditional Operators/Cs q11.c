#include <stdio.h>
int main() {
    int n,f;
    scanf("%d",&n);
    f=n/100;
    if(f%2==0) printf("Even");
    else printf("Odd");
    return 0;
}