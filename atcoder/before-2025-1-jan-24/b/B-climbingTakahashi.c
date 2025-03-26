// https://atcoder.jp/contests/abc235/tasks/abc235_b?lang=en
#include <stdio.h>

int main(){
    int n,h,max;

    scanf("%d",&n);
    getchar();

    scanf("%d",&max);
    getchar();

    for(int i = 0;i < n-1;i++){
        scanf("%d",&h);
        getchar();
        max = h > max ? h : max;
    }

    printf("%d\n",max);
    return 0;
}