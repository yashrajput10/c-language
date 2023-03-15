#include<stdio.h>
/*
5.WAP to find a the answer given formula (x+y+z)3.
=>(X+Y+Z)³ = X³+Y³+Z³+3(X+Y)(Y+Z)(Z+X).
*/
main(){
	int x,y,z,a;
	printf("enter the value of x=");
	scanf("%d", &x);
	printf("enter the value of y=");
	scanf("%d", &y);
	printf("enter the value of z=");
	scanf("%d", &z);
	a=(x*x*x)+(y*y*y)+(z*z*z)+3*(x+y)*(y+z)*(z+x);
	printf("(x+y+z)3= %d",a);
}