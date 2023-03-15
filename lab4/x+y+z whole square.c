#include<stdio.h>
/*
7.WAP to find a the answer given formula (x+y+z)2.
=>(x+y+z)2= x2+y2+z2+2xy+2yz+2xz.
*/
main(){
	int x,y,z,total;
	printf("enter the value of x=");
	scanf("%d", &x);
	printf("enter the value of y=");
	scanf("%d", &y);
	printf("enter the value of z=");
	scanf("%d", &z);
	total=(x*x)+(y*y)+(z*z)+2*(x*y)+2*(y*z)+2*(x*z);
	printf("(x+y+z)2= %d",total);
}