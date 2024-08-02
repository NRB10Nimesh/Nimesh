#include<stdio.h>
int main(){
	float p,r,t,si;
	printf("Enter the principle:\n");
	scanf("%f",&p);
	printf("Enter the rate:\n");
	scanf("%f",&r);
	printf("Enter the time:\n");
	scanf("%f",&t);
	si=(p*t*r)/100;
	printf("%.2f is simple intrest",si);
}