#include<stdio.h>
int swap(int*,int*);
int main(){
    int x,y;printf("enter the value of x and y\n");
    scanf("%d%d",&x,&y);
    printf("before swapping\nx=%d\ny=%d\n",x,y);
    swap(&x,&y);
    printf("after swaping \nx=%d\ny=%d\n",x,y);
}
int swap(int*a,int*b){
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;


}