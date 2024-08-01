#include<stdio.h>
int main(){
	float r,c,a;
	printf("Please enter radius of circle");
	scanf("%f",&r);
	c=2*3.1415*r;
	a= 3.1415*r*r;
	printf("%.2f is circumference of circle\n",c);
	printf("%.2f is area of circle\n",a);
	return 0;
}