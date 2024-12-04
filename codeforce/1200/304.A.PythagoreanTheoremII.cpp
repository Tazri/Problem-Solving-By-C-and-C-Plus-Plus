#include <stdio.h>

bool isPerfect[200000012];

int main(){
    int n;
    scanf("%d",&n);
    getchar();


    int total = 0;
   
    for(int i = 0;i <= n;i++) isPerfect[i*i] = 1;

    for(int a = 1;a <= n;a++){
        for(int b = a;b <= n;b++){
            int c2 = (a*a) + (b*b);
            
            if(isPerfect[c2]) total++;
        }
    }
    printf("%d\n",total);
    return 0;
}