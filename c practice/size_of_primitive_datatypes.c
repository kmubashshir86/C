#include <stdio.h>

int main(){
    //short  ≤  int  ≤  long  ≤  long long
    //learning sizeof() retunr unsingned integer and its format specifier is %u
    printf("size of char is %u bytes\n",sizeof(char));
    printf("size of char is %u bytes\n",sizeof(int));
    printf("size of char is %u bytes\n",sizeof(float));
    printf("size of char is %u bytes\n",sizeof(double));
    printf("size of char is %u bytes\n",sizeof(long int)); // winodws mai int long int same hote hai
    printf("size of char is %u bytes\n",sizeof(long long int));
    printf("size of char is %u bytes\n",sizeof(long double));//8 bytes
    printf("size of char is %u bytes\n",sizeof(short int));//2 bytes
    // int short(2 bytes) < int(4 bytes) < long(8 in linux 4 in windiows)  <long long(12 in linux , 8 in window)
    //int unsinged singed {(2^(bits)) for 0 to last for unsinged}  {(2^(bits-1)-1) for 0 to last 2^(bits-1) from -last to -1 for singed}
    // float 
    //double < Long double

    return 0;
}