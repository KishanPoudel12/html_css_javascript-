#include<stdio.h>
int add(int a,int b){
  int c = a+b;
  return c;
}
int main() {
int c ;
c = add(3,4);
printf("The value of c is %d",c);
return 0;
}