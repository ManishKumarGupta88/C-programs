#include<stdio.h>
int table();
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    table(n);

}
int table(int n){
    for(int a=1;a<=10;a=a+1){
        printf("%d\n",a*n);
        
    }
}