%{
#include<stdio.h>
int cons=0;
%}
%%
[0-9]+ { cons++; printf("%s is a constant\n", yytext);  }
.|\n { }
%%
int yywrap() 
{
return 1; 
}
int main(int argc,char* argv[])
{
printf("enter the string:\n");
yylex();
printf("Number of Constants : %d\n", cons);
}
