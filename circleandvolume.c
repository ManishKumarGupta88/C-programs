#include<stdio.h>
#include<math.h>
int main(){
    float pi=3.14;
    int r,h,areacir,volcil;
    printf("enter a radius:");
    scanf("%d",&r);
    printf("enter a height:");
    scanf("%d",&h);
    areacir=pi*pow(r,2);
    volcil=pi*pow(r,2)*h;
    printf("area of the circle is:%d\n",areacir);
    printf("volume of the cylinder:%d",volcil);

}