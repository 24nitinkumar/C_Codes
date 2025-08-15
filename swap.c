#include<stdio.h>
int main (){
	int a,b;
	printf("Enter first number(a) : ");
	scanf("%d",&a);
	printf("Enter second number(b) : ");
	scanf("%d",&b);
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("after swapping a is %d and b is %d",a,b);
	return 0;
}
