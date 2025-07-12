#include <stdio.h>
int factorial(int num ){
    int fact = 1;
    for (int i=1;i<num;i++){
    fact=fact*i;}
return fact;}
int main(){
    int num;
    printf("factorial of which number ");
    scanf("%d",&num);
    int factorial;
    printf("factorial of given number is %d",factorial);
   return 0;
 
}

