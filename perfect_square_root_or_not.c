
#include <stdio.h>
#include <math.h>


void checkperfectsquare(int n)
{

	if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
		printf("True");
	}
	else {
		printf("False");
	}
}

// Driver Code
int main()
{

	int n;
	scanf("%d", &n);
	checkperfectsquare(n);
	return 0;
}
