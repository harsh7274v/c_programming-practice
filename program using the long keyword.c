#include<stdio.h>
int main(){
  int a;
  long b;
  long long c;
  double d;
  long double e;
  printf("size of int=%zu bytes",sizeof(a));
  printf("size of long=%zu bytes",sizeof(b));
  printf("size of long long=%zu bytes",sizeof(c));
  printf("size of double=%zu bytes",sizeof(d));
  printf("size of long double=%zu bytes",sizeof(e));
  return 0;
}
