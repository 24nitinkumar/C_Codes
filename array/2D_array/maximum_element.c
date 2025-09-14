#include <stdio.h>
int main (){
    int arr[2][2]={1,2,3,4};
    // int brr[2][2]={1,2,3,4};
    int max=arr[0][0];
    int max_i,max_j;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
                 max_i=i;
                 max_j=j;
            }
        }
    }
    printf("the index of maximum element is [%d][%d]\n",max_i,max_j);
    printf("the largest element of array is %d",max);
    return 0;
}