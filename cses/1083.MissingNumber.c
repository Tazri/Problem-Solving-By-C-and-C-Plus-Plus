// link : https://cses.fi/problemset/task/1083/
#include <stdio.h>

int main(){
    int n;
    int m,f;

    m = 0;
    scanf("%d",&n);
    getchar();

    for(int i = 0;i < n-1;i++){
        scanf("%d",&f);
        m^=f^(i+1);
    }
    m^=n;
    printf("%d\n",m);
    return 0;
}