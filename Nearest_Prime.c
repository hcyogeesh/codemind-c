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
    int i,Sprime, Lprime, num, np, cases;
    scanf("%d", &cases);
    while(cases>0){
    
    scanf("%d", &num);
    
    for(i=num; i>=2; i--){
        if (isPrime(i)){
            Sprime=i;
            break;
        }
    }
    for(i=num; ; i++){
        if (isPrime(i)){
            Lprime=i;
            break;
        }
    }
    
    if((num-Sprime)<= (Lprime-num)){
        np=Sprime;
    }
    else{
        np=Lprime;
    }
    printf("%d
", np);
    cases--;
    }
    
    return 0;
    }