#include<stdio.h>

int main(){
    
    int n,d;
    int even=1, odd=1, mixed=0;
    
    scanf("%d", &n);
    
    while(n>0){
        d = n%10;
        n=n/10;
        if(d%2==0)
            odd=0;
        else
            even=0;
    }
    if(even){
        printf("Even");
    }
    else 
        if (odd) {
            printf("Odd");
        }
        else
            printf("Mixed");
        
    
    return 0;
}