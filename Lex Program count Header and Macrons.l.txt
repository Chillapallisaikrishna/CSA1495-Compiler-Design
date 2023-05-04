%{
int nmacro,nheader;
%}
%%
^#define {nmacro++;}
^#include {nheader++;}
%%
int yywrap(void){
return 1;
}
int main(){
yylex();
printf("number of macros defined=%d\n",nmacro);
printf("number of header files included=%d\n",nheader);
}