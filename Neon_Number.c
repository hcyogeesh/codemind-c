
#include <stdio.h>

int Check_Neon_Number(int num) {

	int square = num * num;

	int n = square;

	int digit;

	int sum = 0;

	while (n != 0) {

		digit = n % 10;
		sum = sum + digit;
		n = n / 10;
	}

	// Checking the condition of a Neon Number
	if (sum == num)
		return 1; // If condition is true.
	else
		return 0; // If condition is false.
}

// Driver Code
int main()
{
	int n = 9;
    scanf("%d", &n);
	// Calling the function
	int ans = Check_Neon_Number(n);
	if (ans == 1)

		// The number is Neon
		printf("Neon Number");
	else

		// The number is not Neon
		printf("Not Neon Number");
	return 0;
}
