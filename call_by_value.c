#include<stdio.h>
void swap(int a,int b){
    int c=a;
    a=b;
    b=c;
}  
int main(){
    int va1=3,va2=4;
    printf("before swaping:%d,%d\n",va1,va2);
    swap(va1, va2);
    printf("a=%db=%d",va1,va2);
}
