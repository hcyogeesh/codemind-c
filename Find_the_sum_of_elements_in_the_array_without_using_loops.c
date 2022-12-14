// C program to find the sum of
// N elements with goto statement

#include <stdio.h>

// Function to perform desired operation
int operate(int N)
{
	int sum = 0, index = 0;
	int array[N];

label:
    scanf("%d", &array[index]);
	sum += array[index++];

	if (index < N) {

		// backward jump of goto statement
		goto label;
	}

	// return the sum
	return sum;
}

// Driver Code
int main()
{

	// Get N
	int N, sum = 0;
	scanf("%d", &N);

	
	// Find the sum
	sum = operate(N);

	// Print the sum
	printf("%d", sum);
}
