#include<stdio.h>
struct employee{
    int id;
    char name[10];
};
//declaring funtion
void display(struct employee);
int main(){
  struct employee emp;
  printf("Enter details:\n");
  scanf("%d %s",emp.id,emp.name);
  display(emp);
  return 0;
}
void display(struct employee emp){
    printf("\n%d\t%s\n",emp.id,emp.name);
}
