#include <stdio.h>
int main ()
{
 char str1 [12], str2 [14];
 float f;
 int g;
 
 FILE * fp;
 fp = fopen ("test.txt","w+");
fprintf(fp, "%s %f", "Price:", 234.32);
 fprintf(fp, "\n%s %d", "Pieces:", 120);
 
 rewind (fp);// sets the file pointer at the beginning of the stream
 
 fscanf (fp, "%s", str1);
 fscanf (fp, "%f", &f);
 fscanf (fp, "%s", str2);
 
 
 fclose (fp);
 
 printf ("%s %2f \n",str1,f);
 printf ("%s %d \n",str2,g);
return 0;
}
