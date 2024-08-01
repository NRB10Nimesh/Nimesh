#include<stdio.h>
int main(){
	float a,b;
	printf("Please enetr the temperature in Fahrenheit");
	scanf("%f",&a);
	b=(a-32)*5.0/9.0;
	printf("%.2f is the converted temperature in celcius of %d",b,a);
}