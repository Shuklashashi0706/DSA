#include <stdio.h>
#include <stdlib.h>
void tower_hanoi(int n, char a, char b, char c);
int main()
{
    int n;
    printf("Enter no of disks:\n");
    scanf("%d",&n);
    tower_hanoi(n,'a','b','c');
    return 0;
}
void tower_hanoi(int n, char a, char b, char c){
    if(n==1){
        printf("1 disk moves from %c to %c \n",a,c);
    }
    else{
        tower_hanoi(n-1,a,c,b);
        printf("%dth disk moves from %c to %c\n",n,a,c);
        tower_hanoi(n-1,b,a,c);
    }
}

