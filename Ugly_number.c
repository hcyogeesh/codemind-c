// C program to find nth ugly number
#include <stdio.h>
#include <stdlib.h>

int maxDivide(int a, int b)
{
	while (a % b == 0)
		a = a / b;
	return a;
}


int isUgly(int no)
{
	no = maxDivide(no, 2);
	no = maxDivide(no, 3);
	no = maxDivide(no, 5);

	return (no == 1) ? 1 : 0;
}



int main()
{
	int n;
	
	scanf("%d", &n);
	
	if (isUgly(n))
	    printf("Ugly Number");
	else
	    printf("Not Ugly Number");
	
	return 0;
}
