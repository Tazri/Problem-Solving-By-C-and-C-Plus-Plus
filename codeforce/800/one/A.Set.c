// problem links : https://codeforces.com/problemset/problem/2029/A
#include <stdio.h>

int main(){
    int tc;

    scanf("%d",&tc);

    while(tc--){
        int l,r,k;
        
        scanf("%d %d %d",&l,&r,&k);

        int d = r/k;
        
        if(d < l){
            printf("0\n");
        }else{
            printf("%d\n",d-l+1);
        }
    }
    return 0;
}