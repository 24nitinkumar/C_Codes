#include <stdio.h>
int main (){
    int a,b;
    
    printf("Enter no. of rows:");
    scanf("%d",&a);
    printf("enter no. of columns:");
    scanf("%d",&b);
    int marks[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Enter the [%d][%d] element ",i,j);
            scanf("%d",&marks[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }                             
    return 0;
}