#include<stdio.h>
int main(){
    int a;
    printf("table of : ");
    scanf("%d",&a);
    for (int i=0;i<=1000;i++){
        if(i%a==0){
            printf("%d ",i);
        }
    }
    return 0;
}