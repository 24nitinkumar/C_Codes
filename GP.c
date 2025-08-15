#include<stdio.h>
int main(){
    int n;
    printf("no of terms in GP : ");
    scanf("%d",&n);
    int a=3;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a = a * 2;
    }
    return 0;
}