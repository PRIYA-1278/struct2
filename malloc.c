#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;
    scanf("%d",&n);
    ptr=(int *)malloc(6*sizeof(int));
    for(int i=0;i<6;i++){
        printf("enter the value of %d:",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("the value of %d is: %d\n",i+1,ptr[i]);
    }
}