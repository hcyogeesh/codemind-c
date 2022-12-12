#include<stdio.h>

int main(){
    int n;
    int a,b;
    scanf("%d", &n);
    while(n>0){
        scanf("%d%d", &a, &b);
        printf("%d
", a+b);
        n=n-1;
    }
    
    
    
    
    
    return 0;
    
}