#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    printf("enter third number: ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("a is greater than b and c");
    }
    else if (b>a && b>c){
        printf("b is greater than a and c");
    }
    else if (a==b && b==c){
        printf("a,b and c are equal");
    }
    else{
        printf("c is greater than b and a");
    }
    return 0;
}