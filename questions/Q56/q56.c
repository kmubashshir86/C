#include <stdio.h>

int main(){
    printf("enter string size : ");
    int length;
    scanf("%d",&length);
    printf("enter string : ");
    char str[length];
    scanf("%s",&str);
    int vowel = 0,consonant =0;
    for (int i=0;i<=length;i++){
        if ((str[i]<='Z' && str[i]>='A') || (str[i]<='z' && str[i]>='a')){
            if((str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' || str[i] == 'o' ||str[i] == 'u') || ((str[i] == 'A' ||str[i] == 'E' ||str[i] == 'I' || str[i] == 'O' ||str[i] == 'U'))){
                vowel+=1;
            }
            else{
                consonant+=1;
            }

        }
        else{
            continue;
        }
    }
    printf("%d %d",vowel,consonant);
    return 0;
}