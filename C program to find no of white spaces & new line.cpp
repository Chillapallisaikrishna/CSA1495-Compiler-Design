#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *f;
    char ch;
    int newline=1,spaces=0;
	f=fopen("c.txt","r");
	while(1)
    {
        ch=fgetc(f);
        if(ch==EOF)
        break;
        if(ch==' ')
        spaces++;
        if(ch=='\n')
        newline++;
        }
		fclose(f);
        printf("\n Number of whitespaces = %d",spaces);
        printf("\n Number of lines = %d",newline);
		getch();
}
