#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int i, j, k, x, y, z, ans[100][100]={{0}}, ans1[100][100], ans2[100][100];
    scanf("%d%d", &x, &y);
    for(i=0; i<x; i++)
        for(j=0; j<y; j++)
            scanf("%d", ans1[i]+j);
    scanf("%d%d", &y, &z);
    for(i=0; i<y; i++)
        for(j=0; j<z; j++)
            scanf("%d", ans2[i]+j);
    for(i=0; i<x; i++)
        for(j=0; j<y; j++)
            for(k=0; k<z; k++)
                ans[i][k]+=ans1[i][j]*ans2[j][k];
    for(i=0; i<x; i++){
        for(j=0; j<z; j++){
            printf("%d", ans[i][j]);
            if(j!=z-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}