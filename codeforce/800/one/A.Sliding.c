#include <stdio.h>

int main(){
    int tc;

    scanf("%d",&tc);

    while(tc--){
        long long n,m,r,c;
        long long sum_dist = 0;

        scanf("%lld %lld %lld %lld",&n,&m,&r,&c);

        int dr = n - r; // down row
        sum_dist += dr*m;
        sum_dist += dr*(m-1);
        sum_dist += m - c;

        printf("%lld\n",sum_dist);

    }
    return 0;
}