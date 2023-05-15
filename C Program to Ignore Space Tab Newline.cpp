#include <stdio.h>
int main(void)
{
    char buff[10];
    int r;
    r = 1;
    scanf("%*[ ]");
    while (r == 1) 
	{
        r = scanf("%9[^ \n]%*[ ]", buff);
        if (r == 1) 
		fputs(buff, stdout);
    }
    putchar('\n');
    return 0;
}
