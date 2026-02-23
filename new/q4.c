#include <stdio.h>

int main(void) {
    float x,y;
    printf("enter 2 floats x,y : ");
    scanf("%f,%f",&x,&y);
    printf("%f * %f = %.2f\n",x,y,x*y);
    return 0;
}