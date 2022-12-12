#include<stdio.h>
int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}

int findGCD(int arr[], int n)
{
  int result = arr[0];
  for (int i = 1; i < n; i++)
  {
    result = gcd(arr[i], result);
 
    if(result == 1)
    {
    return 1;
    }
  }
  return result;
}
 
// Driver code
int main()
{
  int arr[100];
  int n, i;
  
  scanf("%d", &n);
  
  for(i=0; i<n; i++)
    scanf("%d", &arr[i]);
  
  printf("%d", findGCD(arr, n));
  
  return 0;
}