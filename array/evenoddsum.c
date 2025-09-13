#include<stdio.h>
int main (){
    int odd=0,even=0;
    int arr[5]={1,2,3,4,5};
    for (int i=0;i<5;i++){
        if(i%2!=0){
            odd=odd+arr[i];
        }
        else{
            even=even+arr[i];
        }
    }
    int difference=odd-even;
    printf("the difference between even and odd indices of array is %d  ",difference);
    return 0;
}