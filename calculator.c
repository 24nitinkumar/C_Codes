#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
char b;
scanf("%c",&b);
int c ;
scanf("%d",&c);
if(b=='+')
printf("%d",a+b);
if(b=='-')
printf("%d",a-b);
if(b=='*')
printf("%d",a*b);
if(b=='/')
printf("%d",a/b);
return 0;
}
