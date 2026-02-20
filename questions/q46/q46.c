#include <stdio.h>
#include <limits.h>

int main(){
    int ans= INT_MIN;
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
    int size=sizeof(array)/sizeof(array[0]);
    for (int j=0;j<size;j++){
        if (array[j]>ans){
            ans=array[j];
        }
        else{
            continue;
        }
    }
    printf("%d\n",ans);
    return 0;
}