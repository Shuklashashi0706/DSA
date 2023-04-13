#include <stdio.h>
int exp_fun(int x, int y);
int main()
{
    int x, y;
    printf("Enter base number and exponent nu.:\n");
    scanf("%d%d", &x, &y);
    printf("Exponent is %d\n", exp_fun(x, y));
    return 0;
}
int exp_fun(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    else
    {
        return (x * exp_fun(x, y - 1));
    }
}
