
#include <stdio.h>


int main(){
    int sum = 0;
    int n;
    scanf("%d",&n);
    getchar();

    for(int i = 0;i < n;i++){
        int ai;
        scanf("%d",&ai);
        getchar();
        sum += ai;
    }
    printf("%d\n",sum);
    return 0;
}