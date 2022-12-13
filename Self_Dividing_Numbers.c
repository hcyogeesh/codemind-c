#include <stdio.h> 

  
int isDivisible(int n1, int digit){ 
    
    if (((digit != 0) && ((n1 % digit) == 0)))
        return 1;
    else
        return 0;
} 
  
int selfDivide(int num){ 
    int temp = num; 
    int digit;
    while(temp > 0){ 
  
        digit = temp % 10; 
        
        if(!(isDivisible(num, digit))) 
            return 0; 
  
        temp= temp/10; 
    } 
    return 1; 
} 
  
int main(){ 
    int i,m, n;
    
    scanf("%d%d", &m, &n);
    for(i=m; i<=n; i++){
        if(selfDivide(i))
            printf("%d ", i); 
    }
    return 0; 
}