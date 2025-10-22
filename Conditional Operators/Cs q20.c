#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if((int)ch%2==0) printf("Even");
    else printf("Odd");
    return 0;
}