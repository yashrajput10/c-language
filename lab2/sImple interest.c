#include<stdio.h>
int main(){
	float p,r,t,si;

	printf("enter the principle amount=");
	scanf("%f", &p);
	
	printf("enter the rate of interest=");
	scanf("%f", &r);
	
	printf("enter the time duration=");
	scanf("%f", &t);
	
	si=p*r*t/100;
	printf("the simple interest is=%f",si);
}