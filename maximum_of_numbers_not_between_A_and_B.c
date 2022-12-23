#include<stdio.h>

int main(){
    
    int n, arr[100],i,a,b, max=-1;
    
    scanf("%d", &n);
    
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    scanf("%d%d", &a, &b);
    for(i=0;i<n;i++){
        
        if(!(arr[i]>=a && arr[i]<b)){
            if(arr[i]>max)
                max=arr[i];
        }
    
    }
    printf("%d", max);
}