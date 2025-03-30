#include<stdio.h>
int main(){

for(int i=1;i<=4;i=i+1){
        
        for(int j=1;j<=5-i;j++){
            printf("* ");
        }
        printf("\n");
    }
}