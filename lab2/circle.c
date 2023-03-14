#include<stdio.h>
int main(){
	
	int r;
	const float pi=3.14;
	float area;
	

	printf("Enter the radius of circle:-");
	scanf("%d", &r);
	
	area=pi * (r*r);
	printf("Area of circle=%.2f", area);
}