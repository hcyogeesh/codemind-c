#include<stdio.h>

int reverseNumber(int num) {
   int res = 0;
   while(num != 0) {
      res = res * 10 + num % 10; //cut last digit and add into the result
      num /= 10; //reduce the number
   }
   return res;
}

bool checkAdamNumber(int num) {
   int rev_num = reverseNumber(num);
   
   int sq_num = num * num;
   int sq_rev_num = rev_num * rev_num;

   if(sq_num == reverseNumber(sq_rev_num)) {
      return true;
   }
   return false;
}

int main() {
   int num;
   scanf("%d", &num);
   
   if(checkAdamNumber(num)) {
      printf("True");
   } else {
      printf("False");
   }
   return 0;
}