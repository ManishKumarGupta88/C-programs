#include <stdio.h>
#include <stdlib.h>
int main()
{
 FILE* fp = NULL;
 fp = fopen("manisk.txt", "w");
 if (fp == NULL) 
{
 printf("The file can't be opened!\n");
 exit(1);
 }else{
 
 char ch = 't';
 putc(ch, fp);
 printf("File has been modified !\n");
 fclose(fp);
 fp = NULL;
 return 0;}
}
