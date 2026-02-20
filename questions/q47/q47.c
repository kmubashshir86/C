#include <stdio.h>
#include <math.h>

int sum(int x, int array[]){
    if (x == 0){
        return array[0];
    }
    else{
        return sum(x-1, array) + array[x];
    }
}

float average(int sum, float n){
    if (n == 0.0){
        return -1;
    }
    return sum / n;
}

int main(){
    int array[]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(array)/sizeof(array[0]);

    int sum_ = sum(size-1, array);
    float average_ = average(sum_, size);

    float ans = 0.0;

    for(int i=0; i<size; i++){
        ans += (array[i] - average_) * (array[i] - average_);
    }

    ans = sqrt(ans / (size - 1));

    printf("%f\n", ans);

    return 0;
}