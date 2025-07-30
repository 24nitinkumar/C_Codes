#include<stdio.h>
int factorial(int a){
	if(a==1){
		return 1;
	}
	 return a*factorial(a-1);
}
int main (){
	int a;
	printf("Enter a number : ");
	scanf("%d",&a);
	int fact =factorial(a);
	printf("factorial of this number is: %d",fact);
	return 0;
} 
