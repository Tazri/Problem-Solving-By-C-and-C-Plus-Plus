// link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E
#include <stdio.h>

#define MAX 1000123
char s[MAX];

int digit(char);

int main(){

    scanf("%s",s);

    int i = 0;
    int sum = 0;
    while(s[i] != '\0'){
        sum += digit(s[i++]);
    }

    printf("%d\n",sum);
    
    return 0;
}

int digit(char d){
    return (int)d - (int)'0';
}