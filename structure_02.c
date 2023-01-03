#include<stdio.h>
struct employee{
    int id;
    float salary;
    char name[20];
};
int main(){
    struct employee s1={100,1000,"harry"};
    printf("%u\n",&s1.id);
    printf("%u\n",&s1.salary);
    printf("%u\n",&s1.name);
   // printf("code is %d\n",s1.id);
    //printf("salary is %f\n",s1.salary);
    //printf("name is %s\n",s1.name);
}