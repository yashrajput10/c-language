#include<stdio.h>
/*
2.WAP to find a the answer given formula (x-y)2.
=>(x-y)2= x2-2xy+y2.
*/
main(){
	int x,y,total;
	printf("enter the value of x=");
	scanf("%d", &x);
	printf("enter the value of y=");
	scanf("%d", &y);
	total=(x*x)-2*(x*y)+(y*y);
	printf("(x-y)2= %d",total);
}