#include<stdio.h>
int main(){
    int n,max=0;
    printf("Enter the no. elements of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("the maximum element of array is %d",max);
    return 0;

}