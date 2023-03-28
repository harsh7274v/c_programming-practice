#include<stdio.h>
int main(){
  int dividend,divisor;
  printf("Enter dividend:");
  scanf("%d",&dividend);
  printf("Enter divisor:");
  scanf("%d",&divisor);
  printf("%d\n",dividend/divisor);
  printf("%d",dividend%divisor);
  return 0;
}
