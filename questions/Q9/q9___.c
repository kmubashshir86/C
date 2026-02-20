#include <stdio.h>

int main(){
    int a,b;
    a=1;
    b=2;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d\n",a,b);
    return 0;
    // ^ => xor
    // a= _ _ _ _ _ _ _ _
    // b= - - - - - - - -
    // a=a^b => a= _^- _^- _^- _^- _^- _^- _^- _^-
    // b=a^b => b= _^-^- _^-^- _^-^- _^-^- _^-^- _^-^- _^-^- _^-^- => a^a=0 a^0=a => _^-^- = _^0 = _ => became same as initial a
    // a=a^b => a= "_^-^_ " * 8 => _^_^- = 0^- = - initals as b
    //a=b and b=a  
}