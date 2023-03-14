#include<stdio.h>
main(){
	int a,b;
	printf("enter the value of a and b\n");
	scanf("%d%d", &a,&b);
	printf("before swapping\n a=%d\n b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping\n a=%d\n b=%d\n",a,b);
}
