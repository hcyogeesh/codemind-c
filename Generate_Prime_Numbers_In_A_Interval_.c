#include<stdio.h>
int isPrime(int n){
    int i, prime=1;
    if (n==1){
        return 0;
    }
    for(i=2; i<n; i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    return prime;
    
    
}


int main(){
    
    int i,m,n;
    
    scanf("%d%d", &m, &n);
    
    for(i=m;i<=n;i++){
        if(isPrime(i))
            printf("%d
", i);
    }
        
    
        
    return 0;
}