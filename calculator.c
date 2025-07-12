#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
char b;
getchar();
scanf("%c",&b);
int c ;
scanf("%d",&c);
if(b=='+')
printf("%d",a+c);
if(b=='-')
printf("%d",a-c);
if(b=='*')
printf("%d",a*c);
if(b=='/')
printf("%d",a/c);
return 0;
}