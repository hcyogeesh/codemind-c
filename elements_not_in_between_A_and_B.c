#include<stdio.h>

int main(){
    
    int n, i, x,y, count=0;
    
    scanf("%d", &n);
    
    int a[n];
    
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        
    }
    scanf("%d%d", &x,&y);
    
    
    for(i=0; i<n; i++){
        if(!(a[i]>=x && a[i]<=y)){
            
            count++;
            printf("%d ", a[i]);
        }
    }
    if(count==0)
        printf("-1");
    return 0;
}