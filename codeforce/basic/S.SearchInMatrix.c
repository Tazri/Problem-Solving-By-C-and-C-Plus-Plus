// link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

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

    int x;
    scanf("%d",&x);
    getchar();

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(x == arr[i][j]){
                printf("will not take number\n");
                return 0;
            }
        }
    }

    printf("will take number\n");

    return 0;
}