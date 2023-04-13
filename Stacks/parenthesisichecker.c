#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5
char st[MAX];
int top = -1;
void push(char);
char pop();
int main()
{
    char exp[MAX], ch, temp;
    int flag = 1, i;
    printf("Enter expression:\n");
    scanf("%s", exp);
    for (i = 0; i < strlen(exp); i++) // for passing through each character of an expression
    {
        ch = exp[i];
        if (ch == '(' || ch == '{' || ch == '[') // checking for open paranthesis if yes then pushed into stack
        {
            push(ch);
        }
        if (ch == '}' || ch == ')' || ch == ']') // checking for closing paranthesis if yes then popped from stack and stored into temp variable
        {       
            //for cases like ((}})) for )),(( are popped but for }} there is nothing left in the stack therefore top==-1 
                if(top==-1){
                    flag=0;
                }
                else{
                temp = pop();
                if (ch == '}' && (temp == '(' || temp == '[')) // conditions for checking for the proper opening and closing of paranthesis
                    flag = 0;
                if (ch == ')' && (temp == '[' || temp == '{'))
                    flag = 0;
                if (ch == ']' && (temp == '(' || temp == '{'))
                    flag = 0;
                }
            
        }
    }
    //for cases like ({) then for ) { is popped and ( is left in stack so top=0
    if (top >= 0) // this line of code is important for checking if ({ exist because it will be pushed but not popped so top will be > 0
    {
        flag = 0;
    }
    if (flag == 1)
    {
        printf("Valid exp\n");
    }
    else
    {
        printf("Invalid expression\n");
    }
    return 0;
}
void push(char c)
{
    if (top == MAX - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        top++;
        st[top] == c;
    }
}
char pop()
{
    char el;
    if (top == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        el = st[top];
        top--;
    }
    return el;
}
