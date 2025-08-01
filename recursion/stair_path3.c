#include<stdio.h>
int stair(int n){
	if (n == 0) return 1;
	if (n == 1) return 1;
	if (n == 2) return 2;	
	return stair(n-1)+stair(n-2)+stair(n-3);
}
int main (){
	int a;
	printf("enter no. of stairs :");
	scanf("%d",&a);
	int ways = stair(a);
	printf("number of ways are %d",ways);
	return 0;
}
