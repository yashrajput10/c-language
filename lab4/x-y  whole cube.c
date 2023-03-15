#include<stdio.h>
/*
4.WAP to find a the answer given formula (x-y)3.
=>(x+y)3= x3-3x2y+3xy2-y3.
*/
main(){
	int x,y,total;
	printf("enter the value of x=");
	scanf("%d", &x);
	printf("enter the value of y=");
	scanf("%d", &y);
	total=(x*x*x)-3*(x*x*y)+3*(x*y*y)-(y*y*y);
	printf("(x-y)3= %d",total);
}