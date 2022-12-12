#include<stdio.h>
int isPalindrome(int num){
    int rev=0, n1;
    n1=num;
    while(num>0){
        rev=rev*10+num%10;
        num=num/10;
    }
    if(n1==rev)
        return 1;
    else
        return 0;
}


int main(){
    
    
    int n, num;
    
    scanf("%d", &n);
    
    while(n>0){
        scanf("%d", &num);
        if(isPalindrome(num)){
            printf("True
");
        }
        else{
            printf("False
");
        }
        
        n=n-1;
    }
    
    return 0;
}