#include<math.h>
#include<stdio.h>
int main(){
  double a,b,c,disc,root1,root2,real,img;
  printf("Enter coefficients a,b and c:");
  scanf("%lf %lf %lf",&a,&b,&c);
  disc=b*b-4*a*c;
  //condition for real and coefficients roots
  if (disc>0){
    root1=(-b+sqrt(disc))/(2*a);
    root2=(-b-sqrt(disc))/(2*a);
    printf("root1=%.2lf and root2=%.2lf",root1,root2);
    //condition for real and equal roots
    else if(disc==0){
      root1=root2=-b/(2*a);
      printf("root1=root2=%.2lf",root1);
      //if roots are not real
      else{
        real=-b/(2*a);
        img=sqrt(-disc)/(2*a);
        printf("root1=%.2lf+%.2lf i and root2=%.2lf-%.2lf i",real,img,real,img);
      }
      return 0;
    }
    

