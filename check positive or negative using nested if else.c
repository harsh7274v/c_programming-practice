#include<stdio.h>
int main(){
  double num;
  printf("Enter the number");
  scanf("%lf",&num);
  if (num<=0.0){
    if (num == 0.0)
      printf("you entered 0.");
     else
      printf("you entered negative number");
      }
  else
    printf("you entered positive number");
  return 0;
}
        
    
