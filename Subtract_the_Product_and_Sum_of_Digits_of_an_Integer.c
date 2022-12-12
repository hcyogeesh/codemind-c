#include<stdio.h>
#include<math.h>

int main(){
    
    int n, d, sum=0, prod=1;
    
    scanf("%d", &n);
    
    while(n>0){
        d=n%10;
        n=n/10;
        sum=sum+d;
        prod = prod * d;
    }
    
    printf("%d", abs(sum-prod));
    
    return 0;
}