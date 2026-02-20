#include <stdio.h>

int sum(int x,int array[x]){
    if (x<=0){
        return array[0];
    }
    else{
        return sum(x-1,array)+array[x];
    }
}
void main(void) {
    int n;
    printf("enter length of array : ");
    scanf("%d",&n);
    int array[n];
    int i = 0;
    while (i!= n){
        printf("enter element %d: ",i+1);
        scanf("%d",&array[i]);
        i++;
    }
    printf("average is %f\n",(sum(n-1,array)/(float)n));

    
}