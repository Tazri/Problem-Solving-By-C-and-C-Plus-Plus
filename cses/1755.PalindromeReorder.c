#include <stdio.h>

#define MAX 1000123

char s[MAX];
int count[26];

char digitToLetter(int digit){
    return (char)((char)'A'+digit);
}

int letterToDigit(char ch){
    return (int)ch - (int)'A';
}

int isPalindrome(char *s,int len){
    for(int i = 0,j=len-1;i < len/2;i++,j--){
        if(s[i] != s[j]) return 0;
    }
    return 1;
}

int main(){
    scanf("%s",s);
    getchar();

    int len;
    for(len = 0;s[len] != '\0' && len < MAX;len++){
        int ld = letterToDigit(s[len]);
        count[ld]++;
    }

    // count odd
    char odd = NULL;
    char isOddFound = 0;
    for(int i = 0;i < 26;i++){
        // printf("count[%d] = %d\n",i,count[i]);
        if(count[i] & 1){
            if(isOddFound){
                printf("NO SOLUTION\n");
                count[i]--;
                return 0;
            }else{
                isOddFound = 1;
                odd = digitToLetter(i);
            }
        }
    }


    if(isPalindrome(s,len)){
        printf("%s\n",s);
        return 0;
    }

    // print right half
    for(int i =0;i < 26;i++){
        char ch = digitToLetter(i);

        for(int j = 0;j < count[i]/2;j++){
            printf("%c",ch);
        }
        count[i]/=2;
    }
    
    if(isOddFound){
        printf("%c",odd);
    }

    // print left half
    for(int i = 25;i >= 0;i--){
        char ch = digitToLetter(i);
        for(int j = 0;j < count[i];j++) printf("%c",ch);
        
    }

    printf("\n");
    return 0;
}