#include<stdio.h>
#include<math.h>
void main(){
    float x,y,m;
    printf("enter x=");
    scanf("%f",&x);
    printf("enter y=");
    scanf("%f",&y);
    m=((2.5*log(x))-(0.866*((x*x*x)-(y*y*y))));
    printf("%f",m);
}