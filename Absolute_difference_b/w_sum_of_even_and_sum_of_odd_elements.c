#include<stdio.h>
#include<math.h>

int main(){
    
    int i, n, sumodd=0, sumeven=0;
    
    scanf("%d", &n);
    int a[n];
    
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        if(a[i]%2==0)
            sumeven+=a[i];
        else
            sumodd+=a[i];
        
    }
    printf("%d", abs(sumodd-sumeven));
    return 0;
}