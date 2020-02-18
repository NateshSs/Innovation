#include<stdio.h>
#include<string.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
int ch;
char key[30];
printf("1:link\n2:unlink\n Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
int f=link(argv[1],argv[2]);
if(f==-1)
{
perror("error");
}
else
{
printf("linked");
}
break;
}
case 2:
{
int f=link(argv[1],argv[2]);
if(f==-1)
{
perror("error");
}
else
{
printf("link moved");
unlink(argv[1]);
}
break;
}
}
}
