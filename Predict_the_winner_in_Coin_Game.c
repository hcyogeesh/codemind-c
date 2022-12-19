
#include <stdio.h>

void findWinner(int M, int N)
{
	if (M % 2 == 0 || N % 2 == 0)
		printf("Player 1");
	else
		printf("Player 2");
}

// Driver code
int main()
{
	int M, N;
	scanf("%d%d", &M, &N);
	findWinner(M, N);

	return 0;
}
