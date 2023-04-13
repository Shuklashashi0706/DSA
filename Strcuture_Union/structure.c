#include<stdio.h>
//defining structure
struct employee{
    int id;
    char name[10];
}e1; //decalring e1 variable just after the structure definition

int main(){
  //decalaring e2 variable in main function
  struct employee e2;
  //inserting values in e1 and e2
 //using .
  e1.id=12;
  scanf("%s",e1.name);
//using ->
    e2.id=13;
    scanf("%s",e2.name);
    //printing values;
    printf("%d\n%s",e1.id,e1.name);
    printf("%d\n%s",e2.id,e2.name);
  return 0;
}
