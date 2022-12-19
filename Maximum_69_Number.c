#include<stdio.h>
#include<math.h>
int maximum69Number (int num) 
{
	int flag = 0;
	int n = num, i = 3;
	int res = 0;
	
	while(n)    
	{
		int digit = n / pow(10, i);
		
		if(!flag && digit == 6)
		{
			res = res * 10 + 9;
			flag = 1;
		}
		else
			res = res * 10 + digit;
		
		n = n - (digit * pow(10, i));
		i--;
	}
	return res;
}

int main(){
    int n;
    scanf("%d", &n);
    
    printf("%d", maximum69Number(n));
    
    return 0;
}