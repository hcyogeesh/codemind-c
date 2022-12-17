#include <stdio.h>
#include<math.h>


int isPrime(int N)
{
		for (int i = 2; i <= sqrt(N); i++) {
			if (N % i == 0)
				return 0;
		}
		return 1;
	}

	
	int getDifference(int N)
	{
		if (N == 0)
			return 2;
		else if (N == 1)
			return 1;
		else if (isPrime(N))
			return 0;

		// Variables to store first prime
		// above and below N
		int aboveN = -1, belowN = -1;
		int n1;

		// Finding first prime number greater than N
		n1 = N + 1;
		while (true) {
			if (isPrime(n1)) {
				aboveN = n1;
				break;
			}
			else
				n1++;
		}

		
		n1 = N - 1;
		while (true) {
			if (isPrime(n1)) {
				belowN = n1;
				break;
			}
			else
				n1--;
		}

		
		int diff1 = aboveN - N;
		int diff2 = N - belowN;

		if (diff1<diff2)
		    return diff1;
		else
		    return diff2;
	}


int main()
{
	int N;
	scanf("%d", &N);
    printf("%d", getDifference(N));
    return 0;

}
