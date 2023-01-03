#include<stdio.h>
int fib_recursive(int n){
    if(n==1||n==2)
    return n-1;
    else 
    return fib_recursive(n-1)+fib_recursive(n-2);
}
int fib_iterative(int n){
    int a=0,b=1;
    for(int i=1;i<n-1;i++){
        b=b+a;
        a=b-a;
    }
    return b;//return a; can also be done if loop will iterate from 0 to n-1
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",fib_recursive(n));
    printf("%d",fib_iterative(n));
    
}