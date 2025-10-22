#include <stdio.h>
int main() {
    int a,b,p;
    scanf("%d%d",&a,&b);
    p=a*b;
    if(p>0) printf("Positive");
    else if(p<0) printf("Negative");
    else printf("Zero");
    return 0;
}