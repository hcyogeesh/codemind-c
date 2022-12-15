#include<stdio.h>

int main(){
    
    int n, arr[100], i, flag=1;
    
    scanf("%d", &n);
    
    for(i=0;i<n; i++){
        scanf("%d", &arr[i]);
        if(arr[i]>1){
            flag=0;
            break;
        }
            
    }
    
    if(flag)
        printf("True");
    else
        printf("False");
    
}