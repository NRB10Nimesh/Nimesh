#include<stdio.h>
int main(){
	float l,b,a,p;
	printf("Enter the lenght:");
	scanf("%f",&l);
	printf("Enter the breadth:");
	scanf("%f",&b);
	p= 2*(l+b);
	a= l*b;
	printf("%.2f is perimeter of rectengale\n",p);
	printf("%.2f is area of recentagle\n",a);
	return 0;
}