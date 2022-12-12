#include<stdio.h>
int main(){
    
    int n, d, large;
    
    scanf("%d", &n);
    
    large=0;
    
    while (n>0){
        d = n %10;
        n=n/10;
        if (d>large)
            large=d;
    }
    printf("%d", large);
    return 0;
}