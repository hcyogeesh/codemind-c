#include<stdio.h>
#include<string.h>
#define MAX 50

void printString(int n)
{
    char str[MAX], rev[MAX];
    int i = 0, count=0, begin,end;
 
    while (n > 0) {
        
        int rem = n % 26;
 
        
        if (rem == 0) {
            str[i++] = 'Z';
            n = (n / 26) - 1;
        }
        else 
        {
            str[i++] = (rem - 1) + 'A';
            n = n / 26;
        }
    }
    str[i] = NULL;
 
    while (str[count] != NULL)
        count++;

   end = count - 1;

   for (begin = 0; begin < count; begin++) {
      rev[begin] = str[end];
      end--;
   }

   rev[begin] = NULL; 
 
    printf("%s", rev);
 
    return;
}
 

int main()
{
    int n;
    scanf("%d", &n);
    printString(n);
    
    return 0;
}