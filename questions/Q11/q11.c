//to check whether a character is vowel or consonant

#include <stdio.h>
#include <stdbool.h> // yo yo
#include <ctype.h>

int main(){
    char chr;
    chr='$';
    printf("enter alphabet(A to Z):");
    scanf("%c",&chr);
        
    bool IsVowel;
    bool a=(chr=='A' || chr=='E' || chr=='I' || chr=='O' || chr=='U' );
    bool b=(chr=='a' || chr=='e' || chr=='i' || chr=='o' || chr=='u' );
    IsVowel=a || b;
    if (!isalpha(chr)){
        printf("NOT A ALPHABET\n");
        return 0;
    }
    if (IsVowel){
        printf("VOWEL\n");
    }
    else{
        printf("consonant\n");
    }
    return 0;
}