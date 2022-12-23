#include<stdio.h>

int main(){
    
    int i,n, arr[100], count=0, left, right;
    
    scanf("%d", &n);
    for(i=0;i<n; i++)
        scanf("%d", &arr[i]);
    left=n-1;
    right=1;
    for(i=0; i<n; i++){
        if(i==0) left=n-1;
        if (i==1) left=0;
        if(i==n-1) right=0;
        if((arr[left]%2==1 && arr[right]%2==0) || (arr[left]%2==0 && arr[right]%2==1))
            count++;
        left++;
        right++;
    }
    
    printf("%d", count);
    return 0;
}