#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10
int top=-1;
int st[MAX];
void push(int);
int pop();
int eval(char arr[]);
int main()
{
    char postfix[10];
    printf("Enter postfix exp:\n");
    scanf("%s", postfix);
    int sol = eval(postfix);
    printf("Solution is %d\n", sol);
    return 0;
}
int eval(char arr[])
{
    int a, b;
    char ch, next;
    for (int i = 0; i < strlen(arr); i++)
    {
        ch = arr[i];
        if (ch < '9' && ch > '0')
        {
            push(ch - '0');
        }
        else
        {
            a=pop();
            b=pop();
            switch(ch){
                case '+':push(a+b);
                break;
                case '-':push(a-b);
                break;
                case '/':push(a/b);
                break;
                case '*':push(a*b);
                break;
            }
        }
    }
    return pop();
}
void push(int n){
        top++;
        st[top]=n;
}
int pop(){
    int el;
        el=st[top];
        top--;
    return el;
}