#include<stdio.h>
int fibonacci(int a){
	if (a==1 || a==2){
		return 1;
	}
	return fibonacci(a-1)+fibonacci(a-2);
}
int main(){
	int n;
	printf("Enter a number :");
	scanf("%d",&n);
	int fibo =fibonacci(n);
	printf("%d th term in fibonacci series is %d",n,fibo);
	return 0;
}
