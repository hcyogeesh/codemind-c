#include<stdio.h>

int main(){
    
    int total, h, m;
    
    scanf("%d", &total);
    
    h = total/60;
    m = total % 60;
    
    printf("%d Hour(s) %d Minute(s)", h,m);
    
    
    return 0;
}