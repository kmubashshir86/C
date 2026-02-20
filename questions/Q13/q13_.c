#include <stdio.h>
#include <math.h>

void main(void) {
    printf("enter a,b,c: ");
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    int D = ((b*b)-(4*(a*c)));
    if (D==0){
        int root=-1*(b/(2*a));
        printf("%d %d\n",root,root);
    }
    else if(D>0){
         int alpha= (-1*b + sqrt(D))/(2*a);
         int beta= (-1*b - sqrt(D))/(2*a);
         printf("%d %d\n",alpha,beta);
    }
    else{
        float re = -b/(2*a);
        float img= ( sqrt(-D))/(2*a);
         printf("%f+%fi %f+%fi\n",re,img,re,-img);

    }
}