#include<stdio.h>

int main(){
    
    int n, sum=0, d[100], arr[100], i;
    
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
        sum=sum*10+arr[i];
    }
    
    sum=sum+1;
    
    for(i=0;sum>0;i++){
        d[i] = sum%10;
        sum=sum/10;
    }
    for (int j=i-1; j>=0; j--)
        printf("%d ", d[j]);
    
    return 0;
}