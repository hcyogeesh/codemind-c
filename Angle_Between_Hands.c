#include<stdio.h>
#include<math.h>


double angleClock(int h, int m) {
      if(h == 12) h = 0;
      if(m == 60) m = 0;
      double hAngle = 0.5*((60 * h) + m);
      double mAngle = 6 * m;
      double ret = abs(hAngle - mAngle);
      if (360 - ret< ret)
            return (360-ret);
      else
            return ret;
   }
int main(){
    int hh, mm;
    char str[10];
    
    scanf("%s", str);
    sscanf(str, "%d:%d" , &hh,&mm);
    
    
   printf("%.1f", angleClock(hh, mm));
}