#include<stdio.h>
#include<math.h>

int findCount(int X[], int n, int num1){
    int i,count=0;
    for(i=0; i<n; i++){
        if (X[i]==num1)
            count++;
    }
    return count;
}

int main(){
    
    int n, arr[100], i, flag=0;
    
    scanf("%d", &n);
    
    for(i=0;i<n; i++){
        scanf("%d", &arr[i]);
        if(findCount(arr, n, arr[i])==1){
            printf("%d ", arr[i]);
            flag=1;
        }
        
        
    }
    if(flag==0)
        printf("-1");
    return 0;
}