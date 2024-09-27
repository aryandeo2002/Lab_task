#include<stdio.h>
#include<conio.h>
void main(){
	int a;
	int b;
	int temp;
	printf("Enter First number");
	scanf("%d",&a);
	printf("Enter the second number");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
printf("first value= %d",a);
printf("Second value=%d",b);
}
