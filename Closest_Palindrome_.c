#include<stdio.h>
#include<math.h>

int isPalindrome(int n)
{
    
    int num1=n, rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    if (rev==num1)
        return 1;
    else
        return 0;
}


void closestPalindrome(int num)
{

	int RPNum = num - 1;

	while (!isPalindrome(abs(RPNum)))
		RPNum--;

	int SPNum = num + 1;

	while (!isPalindrome(SPNum))
		SPNum++;

	// check absolute difference
	if (abs(num - RPNum) < abs(num - SPNum))
		printf("%d", RPNum);
	else
	    if (abs(num - RPNum) > abs(num - SPNum))
		    printf("%d", SPNum);
		else
		    printf("%d %d", RPNum, SPNum);
}

// Driver program to test above function
int main()
{
	int num;
    scanf("%d", &num);	
	closestPalindrome(num);
	return 0;
}
