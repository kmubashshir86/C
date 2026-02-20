//quadratic

#include <stdio.h>
#include <math.h>

int main(){
    printf("enter a,b,c:");
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    int D=(b*b)-4*a*c;
    int alpha= (-1*b + sqrt(D))/(2*a);
    int beta= (-1*b - sqrt(D))/(2*a);
    printf("%d,%d\n",alpha,beta);


    return 0;
}