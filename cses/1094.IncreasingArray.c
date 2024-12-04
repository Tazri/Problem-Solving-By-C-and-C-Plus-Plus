#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    getchar();

    long long p,c,m=0;
    scanf("%lld",&p);
    getchar();

    for(int i = 1; i < n;i++){
        scanf("%lld",&c);
        getchar();

        long long d = p < c ? 0 : p - c;
        p = c + d;
        m += d;
    }

    printf("%lld\n",m);
    return 0;
}