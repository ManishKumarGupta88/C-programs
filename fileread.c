#include<stdio.h>
int main(){


FILE *fptr;
fptr = fopen("manisk.txt", "r"); // Open a file in read mode
char myString[100]; // Store the content of the file
if(fptr != NULL) // If the file exist
{
 while(fgets(myString, 100, fptr))
 {
 printf("%s", myString);
}
}
else // If the file does not exist
{
printf("Not able to open the file.");
}
fclose(fptr); }