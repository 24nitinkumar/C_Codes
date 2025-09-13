#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int max=arr[0];
    int smax=arr[0];
    for (int i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for (int i=0;i<5;i++){
        if(smax<arr[i]&&arr[i]<max){
            smax=arr[i];
        }
    }
    printf("second largest no. in array is %d",smax);
    return 0;
}