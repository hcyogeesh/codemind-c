#include <stdio.h>
int main(){
    int arr1[100], n,ctr=0, counter=0;
    int i, j, k;
       
       scanf("%d",&n);
       
       for(i=0;i<n;i++){
	        scanf("%d",&arr1[i]);
	   }

    for(i=0; i<n; i++){
        ctr=0;
        for(j=0,k=n; j<k+1; j++){
            /*Increment the counter when the seaarch value is duplicate.*/
            if (i!=j)
            {
		       if(arr1[i]==arr1[j]){
                 ctr++;
               }
             }
        }
       if(ctr==0){
            counter++;
            printf("%d ",arr1[i]);
        }
    }
    if(counter==0)
        printf("-1");
      
}
