// link : https://onlinejudge.u-aizu.ac.jp/problems/ITP1_6_B

#include <stdio.h>
#define true 1

int s[13];
int h[13];
int c[13];
int d[13];

int main(){
    int n;

    scanf("%d",&n);
    getchar();

    int r;
    char t;
    for(int i = 0;i < n;i++){
        scanf("%c %d",&t,&r);
        getchar();

        if(t == 'S') s[r-1] = true;
        else if(t == 'H') h[r-1] = true;
        else if(t == 'C') c[r-1] = true;
        else if(t == 'D') d[r-1] = true;
    }


    for(int i = 0;i < 13;i++){
        if(!s[i]) printf("S %d\n",i+1);
    }

    for(int i = 0;i < 13;i++){
        if(!h[i]) printf("H %d\n",i+1);
    }

    for(int i = 0;i < 13;i++){
        if(!c[i]) printf("C %d\n",i+1);
    }

    for(int i = 0;i < 13;i++){
        if(!d[i]) printf("D %d\n",i+1);
    }
    return 0;
}