// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W

#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    getchar();

    int arr[n][m];

    for(int i = 0;i <n;i++){
        for(int j = m-1;j >= 0;j--){
            scanf("%d",&arr[i][j]);
            getchar();
        }
    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
           printf("%d",arr[i][j]);

           if(j+1 != m){
            printf(" ");
           }
        }
        printf("\n");
    }

    
    return 0;
}