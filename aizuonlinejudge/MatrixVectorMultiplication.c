// link : https://onlinejudge.u-aizu.ac.jp/problems/ITP1_6_D
#include <stdio.h>

int main(){
    int n,m;

    scanf("%d %d",&n,&m);
    getchar();

    int arr[n][m];

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            scanf("%d",&arr[i][j]);
            getchar();
        }
    }

    int v[m];

    for(int i = 0;i < m;i++){
        scanf("%d",&v[i]);
        getchar();
    }

    int r[n];
    for(int i = 0;i < n;i++){
        int sum = 0;
        for(int j = 0; j < m;j++){
            sum += v[j] * arr[i][j];
        }
        r[i] = sum;
    }

    for(int i = 0;i < n;i++){
        printf("%d\n",r[i]);
    }

    return 0;
}