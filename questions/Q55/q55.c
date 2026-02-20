#include <stdio.h>
void main(void) {
    char a='i';
    char str[11]="hitmanisbad";
    int ans = 0;
    int length = sizeof(str);
    for (int i=0;i<=length;i++){
        if (str[i]==a){
            ans+=1;
        }
        else{
            continue;
        }
    }
    
    printf("%d\n",ans);
}