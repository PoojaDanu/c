#include<stdio.h>
#include<conio.h>
int main()
{
char str[100];
int i, count=0;
printf("Enter the string\n");
gets(str);
for(i=0; str[i]!='\0'; i++)
{
	if(str[i]==' ')
	{
		count++;
	}
}
count++;
printf("Total words are %d",count);
getch();
return(0);
}
//hello

