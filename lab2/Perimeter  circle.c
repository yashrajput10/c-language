#include<stdio.h>
int main(){

    float pi=3.14,radius,perimeter,area;

	printf("Enter the radius:-");
	scanf("%f", &radius);
	
	area=pi*radius*radius;
	perimeter=2*pi*radius;
	printf("Area of circle is %f and perimeter is %f",area,perimeter);
}