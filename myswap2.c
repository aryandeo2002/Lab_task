#include<stdio.h>
#include<conio.h>
void main(){
	int a;
	int b;
	printf("Enter the first number");
	scanf("%d",&a);
	printf("Enter the second number");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("first number %d",a);
	printf("second number %d",b);
	
}
