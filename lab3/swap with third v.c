#include<stdio.h>
main(){
	int a,b,temp;
	printf("enter the value of a and b\n");
	scanf("%d%d", &a,&b);
	printf("before swapping\n a=%d\n b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping\n a=%d\n b=%d\n",a,b);
}
