#include<stdio.h>
int main(){
  int a,b;
  int sum,diff,prod,rem;
  float div;
  printf("Enter first number?");
  scanf("%d",&a);
  printf("Enter second number?");
  scanf("%d",&b);
  
  sum = a + b;
  diff= a - b;
  prod = a * b;
  div  = (float)a / b;
  rem = a % b;
  
  printf("\nSum of %d and %d is %d",a,b,sum);
  printf("\nDifference of %d and %d is %d",a,b,diff);
  printf("\nProduct of %d and %d is %d",a,b,prod);
  printf("\nDiv of %d and %d is %.2f",a,b,div);
  printf("\nReminder of %d and %d is %d",a,b,rem);
}
