#include <stdio.h>

int main(){
    int tc;
    scanf("%d",&tc);
    getchar();
    int p = 0;
    while(tc--){
        int a,b,c;

        scanf("%d %d %d",&a,&b,&c);
        getchar();

        int total = 0;
        if(a) total++;
        if(b) total++;
        if(c) total++;

        if(total>= 2) p++;
    }

    printf("%d\n",p);
    return 0;
}