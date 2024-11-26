// link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
#include <stdio.h>

int main(){
    int n ;
    scanf("%d",&n);
    getchar();

    int p = 0,s = 0,a;
    for(int i = 0;i < n;i++){
        for(int j =0;j < n;j++){
            scanf("%d",&a);
            getchar();

            if(i == j){
                p += a;
            }
            if((i+j)==n-1){
                s += a;
            }
        }
    }

    int diff = p -s;
    diff = diff < 0 ? diff*-1 : diff;

    printf("%d\n",diff);
    return 0;
}