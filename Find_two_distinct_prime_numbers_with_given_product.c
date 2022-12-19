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
    int i,j,n,prod, flag=0;
    scanf("%d", &n);
    
    for(i=2; i<=n; i++){
        if (isPrime(i)){
            for(j=2; j<=n;j++){
                if(isPrime(j)){
                    if(i*j==n){
                        printf("%d %d", i,j);
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1) break;
        }
    }
    if (flag==0)
        printf("-1");
    return 0;
}