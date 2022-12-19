#include<stdio.h>
#include<math.h>

int isPrime(int n){
    int i, flag=0;
    
    if (n == 0 || n == 1)
        flag = 1;

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 0)
    return 1;
  else
    return 0;
}

int isPalindrome(int n){
    
    int n1=n, rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    if(rev==n1)
        return 1;
    else
        return 0;
}

int main(){
    int n,i;
    scanf("%d", &n);
    
    for(i=n+1; ;i++){
        if(isPrime(i) && isPalindrome(i)){
            printf("%d", i);
            break;
        }
    }
    
    return 0;
}