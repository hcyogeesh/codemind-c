#include<stdio.h>

int main(){
    
    int i,n, limit;
    scanf("%d%d", &n, &limit);
    
    for(i=1;i<=limit;){
        
            printf("%d x %d = %d
", n,i, n*i);
            i+=2;
    }
    
    return 0;
}