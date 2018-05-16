#include <stdio.h>

int main(){

    int n,m,i,count,vt[999];

    scanf("%d %d", &n, &m);

    for(i = 0; i < n; i++){
        scanf("%d", &vt[i]);
    }

    count = 0;
    for(i = 0; i < n; i++){

        if(vt[i] > m){
            count += vt[i] - m;
            vt[i+1] -= vt[i] - m;
        }else if(vt[i] < m){
            count += m - vt[i];
            vt[i+1] += m - vt[i];
        }
    }
    printf("%d\n", count);
    
    return 0;
}
