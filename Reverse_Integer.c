#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

static int reverse(int x)
{
    int y = 0;
    while (x != 0) {
        int n = x % 10;
        if (y > INT_MAX / 10 || y < INT_MIN / 10) {
            return 0;
        }
        y = y * 10 + n;
        x /= 10;
    }
    return y;
}
int main(void)
{
    int x;
    scanf("%d", &x);
    printf("%d",reverse(x));
    return 0;
}