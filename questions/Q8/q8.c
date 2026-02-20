//to demonstrate use of long

#include <stdio.h>
#include <math.h>
int main(void){
    printf("integer size %d\n bytes",sizeof(int));
    printf("4 bytes contains %d bits\n",8*4);
    printf("no of integer can be expressed using 4 bytes 32 bits is %d\n",pow(2,32));
    printf("when singed -n to 0 to n so after calulating maximum positive number it can represent is %d\n",pow(2,31)-1);
    //so
    int int_max=2147483647;
    int_max+=1; //now memory overflow hogaya ab ye ek dum back mai chalajayega like -ve se last number jo ki 2**31 hoga
    int_max -=1;//waps int_max bn gaya (underflow hokar)
    long int new_num = int_max;
    new_num*=2;
    
    printf("%li",new_num);

    

    return 0;
}