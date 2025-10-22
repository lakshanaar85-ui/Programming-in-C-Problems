#include <stdio.h>
int main() {
    float r,sa,v;
    scanf("%f",&r);
    sa=4*3.14*r*r;
    v=(4.0/3)*3.14*r*r*r;
    printf("%f %f",sa,v);
    return 0;
}