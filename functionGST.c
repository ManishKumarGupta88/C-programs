#include<Stdio.h>
float addgst(float a);
int main(){
    float n;
    printf("enter a number:");
    scanf("%f",&n);
    float cost=addgst(n);
    printf("%f",cost);
    printf("the actual value is%f",n);

}
float addgst(float a){
    return a+(a*0.18);
}