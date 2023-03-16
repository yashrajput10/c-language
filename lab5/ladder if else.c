#include<stdio.h>
main(){
	
	
	int a;
	
	printf("enter a value:-");
	scanf("%d",&a);
	
	if(a>=1){
		printf("positive");
	}else if (a<0){
		printf("negative");
	}else{
		printf("zero");
	}
	
	
}