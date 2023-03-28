#include<stdio.h>
int main(){
  double num1,num2,product;
  printf("enter the number:")
    scanf("%lf %lf",&num1,&num2);
  product=num1*num2;
  printf("%.2lf",product);
  return 0;
}
