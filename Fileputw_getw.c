#include<stdio.h>
int main( )
{
FILE *fptr;
int i;
 fptr = fopen ("num.txt", "w");
 for (i =1; i<= 10; i++)
 {
putw (i, fptr);
}
 fclose (fptr);
 fptr =fopen ("num.txt", "r");
printf ("file content is");
 for (i =1; i<= 10; i++)
 {
i= getw(fptr);
printf ("%d\t",i);
}
 fclose (fptr);
return 0;
}
