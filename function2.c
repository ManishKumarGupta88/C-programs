#include<stdio.h>
int hello();
int main(){
    int a,b;
    printf("enter a value");
    scanf("%d",&a);
    printf("enter a value");
    scanf("%d",&b);
    int hii=hello(a,b);
    printf("%d",hii);

    
}
int hello(int a,int b){
    
    return a+b;
}