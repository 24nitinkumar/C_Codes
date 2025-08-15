 #include<stdio.h>
 int main(){
 int array[5];
 for( int i=0;i<=4;i++){
   printf(" enter the elements of array : ");
scanf("%d",&array[i]);
 }
for (int i=0;i<=4;i+=2){
   printf(" the elements of array are %d",array[i]);
   printf("\n");

}
return 0;
 }