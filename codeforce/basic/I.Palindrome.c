// link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
#include <stdio.h>

#define MAX 1123
char s[MAX];

int strlen(char *);

int main(){
    scanf("%s",s);
    int len = strlen(s);

    for(int i = 0,j=len-1;i < len/2;i++,j--){
        if(s[i] != s[j]){
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}

int strlen(char *s){
    int i = 0;
    while(*(s+i++) != '\0');
    return i-1;
}