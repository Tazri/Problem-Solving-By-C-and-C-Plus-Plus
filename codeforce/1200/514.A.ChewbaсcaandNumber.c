// link : https://codeforces.com/contest/514/problem/A

#include <stdio.h>

char s[20];

void printchar(char a){
    switch (a)
    {
        case '9' :
            printf("0");
            break;
        case '8' : 
            printf("1");
            break;
        case '7' :
            printf("2");
            break;
        case '6' :
            printf("3");
            break;
        case '5' :
            printf("4");
            break;;
        default :
            printf("%c",a);
    }
}

int main(){
    scanf("%s",s);
    getchar();

    if(s[0] != '\0'){
        if(s[0] != '9'){
            printchar(s[0]);
        }else{
            printf("9");
        }
    }

    for(int i = 1;s[i] != '\0' && i < 20;i++){
        printchar(s[i]);
    }

    printf("\n");

    return 0;
}