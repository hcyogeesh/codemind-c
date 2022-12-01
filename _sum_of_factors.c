#include <stdio.h>
int main()
{
    // declaring the number
    int number,sum=0;

    
    scanf("%d", &number);
    
    
    
    // for loop logic to find the factors
    for (int i = 1; i < number; i++)
    {
        // condition to check if the number is perfectly divisible
        if (number % i == 0)
        {
            sum+=i;
        }
    }
    printf("%d", sum);
    return 0;
}
