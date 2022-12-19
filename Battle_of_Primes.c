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

int main(){
    int m,n,i,count=1;
    scanf("%d%d", &m,&n);
    
    for(i=(m+n); ;i++){
        if(isPrime(m+n+count)){
            printf("%d", count);
            break;
        }
        count++;
    }
    
    return 0;
}