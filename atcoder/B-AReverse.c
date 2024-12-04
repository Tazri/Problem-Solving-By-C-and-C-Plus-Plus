#include <stdio.h>

#define MAX 100123
char s[MAX];

int main(){
    int l,r;
    scanf("%d %d",&l,&r);
    getchar();

    scanf("%s",s);
    getchar();

    l--;r--;
    
    for(int i = 0;i < l;i++){
        printf("%c",s[i]);
    }

    for(int i = r; i >= l;i--){
        printf("%c",s[i]);
    }

    for(int i=r+1;s[i] != '\0' && i < MAX;i++){
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}