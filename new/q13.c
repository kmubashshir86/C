#include <stdio.h>
#include <math.h>
int main(void) {
    int D;
    int a,b,c;
    printf("enter a,b,c : ");
    scanf("%d,%d,%d",&a,&b,&c);
    D=b*b-4*a*c;
    if (D==0){
        printf("%f %f",-b/(2.00*a),-b/(2.00*a));
    }
    else if(D>0){
        printf("%f %f",-b/(2.00*a) + (sqrt(D)/(2.00*a)),-b/(2.00*a) - (sqrt(D)/(2.00*a)));

    }
    else{
        printf("%f+i(%f) %f-i(%f)",-b/(2.00*a),(sqrt(D)/(2.00*a)),-b/(2.00*a),(sqrt(D)/(2.00*a)));
    }
    return 0;
}