#include<stdio.h>
int min (int a, int b){
	if (a>b) {
	return b;
	}
	else{
	return a;
	}
}
int hcf (int a, int b){
	int hcf;
	for (int i=1;i<=min(a,b);i++){
		if(a%i==0 && b%i==0){
			hcf=i;
		}
	}
	return hcf;
}
int main(){
	int a,b;
	printf("Enter the first no. : ");
	scanf("%d",&a);
	printf("Enter the second no. : ");
        scanf("%d",&b);
	int result = hcf(a,b);
	printf("HCF of %d and %d is %d",a,b,result);
	return 0;
}
