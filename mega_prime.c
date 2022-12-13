#include<stdio.h>
#include<math.h>

int isPrime(int n)
{
    int i=0,flag=0;
    if(n==1)
        return 0;
    else
    {    
        int t=sqrt(n);
        for(i=2;i<=t;i++){
            if((n%i)==0){
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
        return 0;
    else
        return 1;
}

int isMegaPrime(int n){
    int i=0,flag=0,temp=0;
    if(isPrime(n)==0)
        return 0;
    else{
        while (n!=0){
            temp=n%10;
            flag=isPrime(temp);
            if(flag==0)
                return 0;
            n/=10;
            
        }
    }
    if(flag==1)
        return 1;
    else 
        return 0;
}

int main(){
    
    int n;
    scanf("%d", &n);
    
    if(isMegaPrime(n)){
        printf("Mega Prime");
    }
    else{
        printf("Not Mega Prime");
    }
}