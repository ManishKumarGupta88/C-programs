#include<stdio.h>
int main()
{
 FILE *fptr = fopen("manisk.txt", "r");
 int ch = getc(fptr);
 while (ch != EOF)
 {
 putchar(ch); //To display the contents of the file on the screen
 ch = getc(fptr);
 }
 if (feof(fptr))
 {
 printf("\n Reached the end of file.");
 }
 else
 {
 printf("\n Something gone wrong.");
 }
fclose(fptr);

return 0;
}
