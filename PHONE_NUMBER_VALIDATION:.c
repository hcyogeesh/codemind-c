#include <stdio.h>

int main()
{

	char i,n[100], flag=0;
	scanf("%s", n);
	for(i=0;n[i]!=NULL;i++){
	    if(n[0]=='0'){
	        flag=1;
	        break;
	    }
	   if(n[i]<='0' && n[i]>='9'){
	       flag=1;
	       break;
	   }
	 }
	 if(i>10 || i<10)
	    flag=1;
	    
	 if(flag)
	    printf("Invalid");
	 else
	    printf("Valid");
	
return 0;
}
