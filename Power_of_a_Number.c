#include<stdio.h>
#include<math.h>

int main(){
    
    int x,y,m;
    int ans;
    scanf("%d%d%d", &x,&y, &m);
    
    ans=(int) pow(x,y);
    ans = ans % m;
    
    printf("%d", ans);
    
    
    return 0;
}