#include<stdio.h>
int main(){
	float r,h,s;
	printf("Enter the height of cylinder:");
	scanf("%f",&h);
	printf("Enter the radius of cylinder:");
	scanf("%f",&r);
   s= 2*3.1415*r*(r+h);
	printf("%.2f :is total surface area of cylinder\n",s);
	return 0;
}