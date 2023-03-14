#include<stdio.h>
int main(){
	int l,b,area;

	printf("Enter The Length=");
	scanf("%d", &l);
	
	printf("Enter The Breath=");
	scanf("%d", &b);
	
	area= l * b;
	printf("Area of Rectangle=%d",area);
}