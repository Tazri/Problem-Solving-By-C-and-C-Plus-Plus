#include <stdio.h>

int main(){
    int arr[4];

    printf("arr[4] : %d\n",arr[4]);
    printf("arr[4] : %d\n",*(arr+4));
    return 0;
}