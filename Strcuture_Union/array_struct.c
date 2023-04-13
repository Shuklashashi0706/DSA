#include<stdio.h>
typedef struct employee{
    int age;
}emp;
int main(){
  emp e1[3];
  for(int i=0;i<3;i++){
    scanf("%d",&e1[i]);
  }
  for(int i=0;i<3;i++){
    printf("%d",e1[i]);
  }
  return 0;
}
