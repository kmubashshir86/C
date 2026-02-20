#include <stdio.h>
#include <math.h>
long long int bin(long long int x);
long long int dec(long long int x);
void main(void) {
    printf("enter binary num : ");
    long long int b;
    scanf("%lld",&b);
    printf("enter decimal num : ");
    long long int d;
    scanf("%lld",&d);
    printf("%lld binary number is equivalent to decimal number %lld\n",b,dec(b));
    printf("%lld decimal number is equivalent to binary number %lld\n",d,bin(d));
}

long long int bin(long long int x){
    long long int n = x;
    long long int ans = 0;
    int i=0;
    while(n!=0){
        ans+=((ceil(pow(10,i)))*(n%2));
        i++;
        n/=2;
    }
    return ans;
}

long long int dec(long long int x){
    long long int n = x;
    double ans=0.0;
    int i=0;
    while(n!=0){
        ans+=(pow(2.0,i)*(n-((n/10)*10)));
        i++;
        n/=10;
    }
    return (long long int) ans;

}