#include <stdio.h>
#include<stdlib.h>
main()
{
FILE *fp;
char ch;
printf("\nProgram to create a file and write contents to a file");
printf("\n___________________");
fp = fopen ("Poem.txt","w");
if(fp==NULL)
{
printf ("\n the file cannot be created:");
exit (1);
}
printf("\nEnter chars->*to stop"); 
while ((ch=getchar())!='*') 
{
fputc (ch,fp); 
}
fclose (fp); 
return 0;
}
