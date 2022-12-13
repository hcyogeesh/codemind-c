#include <stdio.h>

int unique_digits( long long int n )
{
    const long long int Base = 10;

    int unique = 1;

    while ( unique && n )
    {
        long long int digit = n % Base;
        long long int tmp = n /= Base;

        while (tmp && digit != tmp % Base ) tmp /= Base;

        unique = tmp == 0;
    }

    return unique;
}

int main(void) 
{
    int n;
    scanf("%d", &n);

    printf( "%s", unique_digits(n) ? "Unique Number" : "Not Unique Number" );

    
    return 0;
}