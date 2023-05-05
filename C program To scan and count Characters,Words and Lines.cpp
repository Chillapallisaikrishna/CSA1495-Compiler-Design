#include <stdio.h>
#include <stdlib.h>
int main(){
   FILE * file;
   char path[100];
   char ch;
   int characters=0, words=0, lines=0;
   file=fopen("c.txt","r");
   while((ch = getchar())!=EOF)
   {
      putc(ch,file);
   }
   fclose(file);
   printf("Enter source file path: ");
   scanf("%s", path);
   file = fopen(path, "r");
   if (file == NULL)
   {
      printf("Unable to open file.");
      exit(EXIT_FAILURE);
   }
   while ((ch = fgetc(file)) != EOF)
   {
    if(ch==' '||ch=='\n')
     words++;
   if (ch == '\n')
      lines++;
    if(ch!=' ')
      characters++;
   }
   if (characters > 0)
   {
   	  words++;
      lines++;
   }
   printf(" ");
   printf("\nTotal characters = %d", characters);
   printf("\nTotal words = %d", words);
   printf("\nTotal lines = %d", lines);
   fclose(file);
   return 0;
}
