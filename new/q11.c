#include <stdio.h>
#include <ctype.h>

int main(void) {
    char a;
    printf("enter char : ");
    scanf("%c",&a);
    int is_vowel=(a=='A'||a=='E' ||a=='I'||a=='O'||a=='U') || (a=='a'||a=='e' ||a=='i'||a=='o'||a=='u');
    int is_alphabet=('A'<=a && 'Z'>=a) || ('a'<=a && 'z'>=a);
    printf("%s\n",is_alphabet?is_vowel?"vowel":"consonant":"not alphabet");
    
    //or 

    /*  
    if(is_alphabet){
        if(is_vowel){
            printf("vowel\n");
        }
        else{
            printf("consonant\n");
        }
    }
    else{
        printf("not alphabet\n")
    }
    */

   //or use isalpha() from ctype.h

   /*
    if(isalpha(a)){
        if(is_vowel){
            printf("vowel\n");
        }
        else{
            printf("consonant\n");
        }
    }
    else{
        printf("not alphabet\n")
    }
   */

    /*printf("%s",isalpha(x)?x%2==0?"even\n":"odd\n":"not alpha\n")*/
    return 0;
}