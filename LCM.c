
#include <stdio.h>

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}

// Driver program to test above function
int main()
{
	int a, b;
	scanf("%d%d", &a,&b);
	printf("%d", lcm(a, b));
	return 0;
}
