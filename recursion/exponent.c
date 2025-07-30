#include<stdio.h>
int exponent(int a, int b){
	if(b==0){
		return 1;
	}
	return a*exponent(a,b-1);
}
int main (){
	int a,b;
	printf("Enter the base :");
	scanf("%d",&a);
	printf("Enter the exponent :");
        scanf("%d",&b);
	int e = exponent(a,b);
	printf("%d raised to power %d is %d",a,b,e);
	return 0;
}
	
