#include<stdio.h>
int main(){
    
    int n, arr[100], i, flag=1, even[100], odd[100], j=0,k=0;
    
    scanf("%d", &n);
    
    for(i=0;i<n; i++){
        scanf("%d", &arr[i]);
        if(arr[i]%2==0)
            even[j++]=arr[i];
        else
            odd[k++]=arr[i];
    }
    for(i=0;i<j;i++)
        printf("%d ", even[i]);
    for(i=0;i<k;i++)
        printf("%d ", odd[i]);
   
}