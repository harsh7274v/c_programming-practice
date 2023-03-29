#include<stdio.h>
int main(){
  double first,second,temp;
  printf("Enter first number:");
  scanf("%lf",&first);
  printf("enter second number:);
  scanf("%lf",&second);
  temp=first;
  first=second;
  second=temp;
  printf("\n first number=%.2lf",first);
  printf("\n second number=%.2lf",second):
  return 0;
         }
