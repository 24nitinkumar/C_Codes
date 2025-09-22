#include<stdio.h>
#include<string.h>
int main (){
    char name [7];
    gets(name);
    int size=0;
    int i=0;
    while(name[i]!='\0'){
        size++;
        i++;
    }
    printf("the size of '%s' is %d",name,size);
    return 0;
}