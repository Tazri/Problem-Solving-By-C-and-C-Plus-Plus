#include <stdio.h>
#include <math.h>

double dist(int *p1,int *p2){
    int dx = fabs(p1[0] - p2[0]);
    int dy = fabs(p1[1] - p2[1]);

    return sqrt(dx*dx + dy*dy);
}

int main(){
    int n;
    scanf("%d",&n);
    getchar();

    int pos[n][2];
    
    for(int i = 0;i < n;i++){
        scanf("%d %d",&pos[i][0],&pos[i][1]);
        getchar();
    }

    double max = 0;

    for(int i = 0;i < n;i++){
        for(int j = i+1;j < n;j++){
            double d = dist(pos[i],pos[j]);
            max = d  > max ? d : max;
        }
    }

    printf("%0.10lf\n",max);
    return 0;
}