
%{
#include<stdio.h>
#include<stdlib.h>
int a=0,b=0;
%}
%%
"scanf" { a++; fprintf(yyout,"readf");}
"printf" { b++; fprintf(yyout,"writef");}
%%
int yywrap(){ return 1; }
void main()
{
yyin=fopen("c.c","r");
yyout=fopen("new.c","w");
yylex();
printf("scanf count=%d\nprintf count=%d\n",a,b);
}
