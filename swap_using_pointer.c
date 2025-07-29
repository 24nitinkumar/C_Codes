#include<stdio.h>
void swap(int* x,int* y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main(){ 
	int a,b;
	printf("Enter first no.(a) : ");
	scanf("%d",&a);
	printf("Enter second no.(b) : ");
        scanf("%d",&b);
	swap(&a,&b);
	printf("After swapping a is %d and b is %d",a,b);
	return 0;
}
