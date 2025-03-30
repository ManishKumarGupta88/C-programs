#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE* ptr;
    ptr=fopen("manisk.txt","w");
    if(ptr==NULL){
        printf("The file is not opend");
        exit(0);

    }else{
        printf("the file is successfully created");
        fprintf(ptr,"kakkakgsks");
    }
    fclose(ptr);
    return 0;
}