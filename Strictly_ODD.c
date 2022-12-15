#include<stdio.h>

int main(){
    
    int n, arr[100], i, flag=1;
    
    scanf("%d", &n);
    
    for(i=0;i<n; i++){
        scanf("%d", &arr[i]);
        if(i%2==0 && arr[i]%2!=0){
            flag=0;
            break;
        }
            
    }
    
    if(flag)
        printf("True");
    else
        printf("False");
    
}