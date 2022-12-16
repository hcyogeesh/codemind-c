#include<stdio.h>
#include<math.h>
void nearestFibonacci(int num)
{
	if (num == 0) {
		printf("0");
	}

	int first = 0, second = 1;

	int third = first + second;
	while (third <= num) {
		first = second;
		second = third;
		third = first + second;
	}

	int diff = abs(third - num)-abs(second-num);
	if(diff>0)
	printf("%d", second);
	else if(diff<0)
	        printf("%d", third);
	else
	        printf("%d %d", second, third);
}

int main()
{
	int N;
	scanf("%d", &N);
	
	nearestFibonacci(N);
	return 0;
}
