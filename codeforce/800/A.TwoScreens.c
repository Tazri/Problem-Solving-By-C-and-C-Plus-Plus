// link : https://codeforces.com/problemset/problem/2025/A
#include <stdio.h>

#define MAX 123
char s[MAX];
char t[MAX];

void test(){
    int tc;

    scanf("%d",&tc);
    getchar();

    while(tc--){
        scanf("%s",&s);
        getchar();
        scanf("%s",&t);
        getchar();
        int count = 0;
        int i =0;

        while(s[i] != '\0'){
            if(s[i] == t[i]) count++;
            else break;
            i++;
        }

        int j = i;

        while(s[i++] != '\0') count++;

        if(j != 0) count++;

        while(t[j++] !='\0') count++;
        printf("%d\n",count);
    }
}

int main(){
    test();
    return 0;
}