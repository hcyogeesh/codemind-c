#include <stdio.h>  

int main() {  

    int n1, n2, i, gcd; 
    
    scanf ( "%d %d", &n1, &n2);   
      
    
    for( i = 1; i <= n1 && i <= n2; ++i)  
    {  
        if (n1 % i ==0 && n2 % i == 0)  
            gcd = i; /* if n1 and n2 is completely divisible by i, the divisible number will be the GCD_Num */  
    }  
    // print the GCD of two numbers  
    printf ("%d", gcd);  
    return 0;  
}  