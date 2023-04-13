#include <stdio.h>
int factorial(int n);
int main()
{
    int n,val;
    printf("Enter the number:\n");
    scanf("%d", &n);
    val=factorial(n);
    printf("%d\n",val);
    return 0;
}
int factorial(int n){
    int fac=1;
    if(n==0){
        return 1;
    }
    else if(n==1){
        return 1;
    }
    else{
       return(factorial(n-1)*n);
    }
}
