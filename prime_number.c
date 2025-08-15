#include<stdio.h>
int main(){
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    if (a<=1){
        printf("entered number is neither prime nor composite");
        return 0;
    }
    int x=0;
    for(int i=2;i<a;i++){
        if (a%i==0){
            x = 1;
            break;
        }
    }
       if (x==0){
        printf("enterd number is prime ");
       }
       else {
        printf("entered number is composite ");
       }
    
    return 0;
}