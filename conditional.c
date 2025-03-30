//WAP to program to find greatest of 2 numbers using conditional operators
#include<stdio.h>
int main(){
    int a,b,result;
    printf("enter a value of a:");
    scanf("%d",&a);
    printf("enter a value of b:");
    scanf("%d",&b);
    result=(a>b)?a:b;
    printf("greater value is:%d",result);
}