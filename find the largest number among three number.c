//we can solve the problem using 3 if statements but 
//it becomes difficult beacause it execute all three programs.
// so we use if else ladder
#include<stdio.h>
int main(){
  double n1,n2,n3;
  if(n1>=n2 && n1>=n3)
    printf("%.2lf",n1);
  else if (n2>=n1 && n2>=n3)
    printf("%.2lf",n2);
  else
    printf("%.2lf",n3);
  return 0
  }
  
