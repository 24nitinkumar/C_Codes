#include<stdio.h>
int main(){
    int n,product=1;
    printf("Enter the no. elements of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        product=product*arr[i];
    }
    printf("the product elements of array is : %d",product);
    return 0;

}