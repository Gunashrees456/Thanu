#include<stdio.h>

int main(){
	int a.b,temp;

	printf("enter two numbers:");
	scanf("%d %d",&a,&b);

	temp=a;
	a=b;
	b=temp;

	printf("after swapping: a = %d, b = %d\n",a,b);
	
