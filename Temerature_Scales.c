#include<stdio.h>
int main(){
    float a,fern,cels,kal=273.15,kalvin,d,c;
    printf("enter temperatue in degree celcius:");
    scanf("%f",&a);
    fern=(a*9/5)+32;
    printf("Temperature in farenheit:%f\n",fern);
    cels=(fern-32)*5/9;
    printf("Temperature in celsius:%f\n",cels);
    kalvin=a+kal;
    printf("Temperature in kalvin:%f\n",kalvin);
    c=5/9*(fern-32)+kal;
    printf("celcius in kalvin:%f",c);
    
}
