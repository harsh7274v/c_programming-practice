#include<stdio.h>
void main(){
  double n1,n2,n3;
  printf("enter the given numbers:");
  scanf("%lf %lf %lf",&n1,&n2,&n3);
  //outer if statement
  if (n1>=n2){
    if(n1>=n3)
      printf("%.2lf",n1);
    else
      printf("%.2lf",n3);
  }
  else{
    if (n2>=n3)
      printf("%.2lf",n2);
    else
      printf("%.2lf",n3);
  }
}
