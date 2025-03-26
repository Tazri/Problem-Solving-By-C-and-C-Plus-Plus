// link : https://atcoder.jp/contests/abc236/tasks/abc236_b?lang=en
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int r = 0;
    int c;
    for(int i = 0;i < 4*n-1;i++){
        scanf("%d",&c);
        r ^= c;
    }

    printf("%d\n",r);
    return 0;
}