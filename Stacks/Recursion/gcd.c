#include <stdio.h>
int gcd(int x, int y);
int main()
{
    int x, y;
    printf(" Enter the numbers:\n");
    scanf("%d%d", &x, &y);
    printf("GCD IS %d",gcd(x,y));
    return 0;
}
int gcd(int x,int y){
    int rem;
    rem=x%y;
    if(rem==0){
        return y;
    }
    else{
        gcd(y,rem);
    }
}
